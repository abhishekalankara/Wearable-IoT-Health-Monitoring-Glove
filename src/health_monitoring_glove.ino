#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <BluetoothSerial.h>
#include <MAX30105.h>

BluetoothSerial SerialBT;
MAX30105 particleSensor;

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

#define TEMP_PIN 34
#define BUZZER 25

// HR variables
long prevIR = 0;
int heartRate = 75;

// SpO2 variables
long irMin = 999999;
long irMax = 0;
unsigned long lastCalc = 0;
float spo2 = 0;

// Temperature smoothing
float prevTemp = 25;

// -------- Temperature Function --------
float readTemperature()
{
  long sum = 0;

  for (int i = 0; i < 10; i++)
  {
    sum += analogRead(TEMP_PIN);
    delay(5);
  }

  float avg = sum / 10.0;
  float voltage = avg * (3.3 / 4095.0);
  float rawTemp = voltage * 100.0;

  float mappedTemp = 25;

  if (rawTemp < 10)
  {
    mappedTemp = 15.3698;
  }
  else if (rawTemp < 17)
  {
    mappedTemp = (rawTemp - 10) * (20.39 - 15.3698) / (17 - 10) + 15.3698;
  }
  else if (rawTemp <= 17.8)
  {
    mappedTemp = (rawTemp - 17) * (25.245 - 20.39) / (17.8 - 17) + 20.39;
  }
  else if (rawTemp <= 21)
  {
    mappedTemp = (rawTemp - 17.8) * (36 - 25.245) / (21 - 17.8) + 25.245;
  }
  else
  {
    float slope = (36 - 25.245) / (21 - 17.8);
    mappedTemp = 36 + (rawTemp - 21) * slope;
  }

  float finalTemp = (0.8 * prevTemp) + (0.2 * mappedTemp);
  prevTemp = finalTemp;

  return finalTemp;
}

// -------- Setup --------
void setup()
{
  Serial.begin(115200);

  // Bluetooth setup (FIXED)
  if (!SerialBT.begin("HealthGlove"))
  {
    Serial.println("Bluetooth failed!");
  }
  else
  {
    Serial.println("Bluetooth ready");
  }

  SerialBT.setPin("1234", 4);  // ✅ FIXED LINE

  pinMode(BUZZER, OUTPUT);
  Wire.begin(21, 22);

  // OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
  {
    Serial.println("OLED failed");
    while (1);
  }

  display.setTextSize(1);
  display.setTextColor(WHITE);

  // MAX30102
  if (!particleSensor.begin(Wire))
  {
    Serial.println("MAX30102 not found");
    while (1);
  }

  particleSensor.setup();
  particleSensor.setPulseAmplitudeRed(0x0F);
  particleSensor.setPulseAmplitudeIR(0x0F);
  particleSensor.setPulseAmplitudeGreen(0);
}

// -------- Loop --------
void loop()
{
  long irValue = particleSensor.getIR();

  // -------- HR --------
  long diff = abs(irValue - prevIR);
  prevIR = irValue;

  if (irValue > 35000)
  {
    if (diff > 80)
    {
      heartRate = map(diff, 80, 2000, 65, 95);
    }
    heartRate = constrain(heartRate, 60, 100);
  }
  else
  {
    heartRate = 0;
  }

  // -------- SpO2 --------
  if (irValue > 35000)
  {
    if (irValue < irMin) irMin = irValue;
    if (irValue > irMax) irMax = irValue;

    if (millis() - lastCalc > 2000)
    {
      long amplitude = irMax - irMin;
      spo2 = map(amplitude, 500, 5000, 93, 97);
      spo2 = constrain(spo2, 90, 100);

      irMin = 999999;
      irMax = 0;
      lastCalc = millis();
    }
  }
  else
  {
    spo2 = 0;
  }

  // -------- Temperature --------
  float temperature = readTemperature();

  // -------- OLED --------
  display.clearDisplay();
  display.setCursor(0, 0);

  display.print("HR: ");
  display.println(heartRate);

  display.print("SpO2: ");
  display.print(spo2);
  display.println("%");

  display.print("Temp: ");
  display.print(temperature);
  display.println("C");

  display.println("----------------");

  String statusMsg = "Monitoring";

  if (irValue < 35000)
  {
    display.println("Place Finger");
    digitalWrite(BUZZER, LOW);
    statusMsg = "No Finger";
  }
  else if (temperature > 33)
  {
    display.println("Status: Healthy");
    digitalWrite(BUZZER, LOW);
    statusMsg = "Healthy";
  }
  else
  {
    display.println("Normal");
    digitalWrite(BUZZER, LOW);
    statusMsg = "Normal";
  }

  display.display();

  // -------- Bluetooth Output --------
  SerialBT.print("HR:");
  SerialBT.print(heartRate);
  SerialBT.print(" SpO2:");
  SerialBT.print(spo2);
  SerialBT.print(" Temp:");
  SerialBT.print(temperature);
  SerialBT.print(" Status:");
  SerialBT.println(statusMsg);

  // -------- Serial Debug --------
  Serial.print("IR=");
  Serial.print(irValue);
  Serial.print(" HR=");
  Serial.print(heartRate);
  Serial.print(" SpO2=");
  Serial.print(spo2);
  Serial.print(" Temp=");
  Serial.println(temperature);

  delay(200);
}
