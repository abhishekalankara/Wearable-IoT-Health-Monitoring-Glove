# Wearable IoT-Based Health Monitoring Glove for High Altitude Safety

> A portable ESP32-based IoT healthcare device that continuously monitors Heart Rate, Blood Oxygen Saturation (SpO₂), and Body Temperature in real time. The system displays the readings on an OLED display, transmits data wirelessly via Bluetooth, and provides alerts when abnormal conditions are detected.

---

#  Table of Contents

- Overview
- Problem Statement
- Features
- System Architecture
- Hardware Components
- Software Requirements
- Circuit Connections
- Working Principle
- Project Workflow
- Results
- Applications
- Future Improvements
- Repository Structure
- Installation
- Usage
- Screenshots
- Demo Video
- Author
- License

---

#  Overview

High-altitude environments have reduced oxygen levels, which can cause serious health issues such as altitude sickness, hypoxia, dizziness, and fatigue. Continuous monitoring of vital signs becomes essential for trekkers, mountain workers, rescue teams, and patients.

This project introduces a **Wearable IoT-Based Health Monitoring Glove** that measures:

-  Heart Rate (HR)
-  Blood Oxygen Saturation (SpO₂)
-  Body Temperature

using an ESP32 microcontroller. The collected health parameters are displayed on an OLED display and simultaneously transmitted to a mobile phone using Bluetooth.

The system is portable, affordable, lightweight, and designed for real-time health monitoring.

---

#  Problem Statement

People working or traveling at high altitudes are vulnerable to:

- Oxygen deficiency
- Increased heart rate
- Temperature changes
- Delayed medical assistance

Traditional monitoring equipment is often bulky and expensive.

This project aims to provide a compact wearable device capable of continuously monitoring vital parameters and alerting users whenever abnormal readings are detected.

---

#  Features

- Real-time Heart Rate Monitoring
- Real-time SpO₂ Monitoring
- Body Temperature Measurement
- OLED Display
- Bluetooth Data Transmission
- Portable Design
- Low Power Consumption
- Cost Effective
- Easy to Use
- Wireless Monitoring

---

#  System Architecture

```
MAX30102
      │
      │
LM35 Sensor
      │
      ▼
   ESP32 Controller
      │
 ┌────┼───────────────┐
 │    │               │
 ▼    ▼               ▼
OLED Bluetooth     Buzzer
Display Mobile
```

---

#  Hardware Components

| Component | Description |
|------------|-------------|
| ESP32 | Main Microcontroller |
| MAX30102 | Heart Rate & SpO₂ Sensor |
| LM35 | Temperature Sensor |
| OLED SSD1306 | Display Module |
| Buzzer | Health Alert |
| Breadboard | Circuit Prototyping |
| Jumper Wires | Connections |
| USB Cable | Programming ESP32 |

---

#  Software Requirements

- Arduino IDE
- ESP32 Board Package
- Adafruit SSD1306 Library
- Adafruit GFX Library
- MAX30105 Library
- Wire Library
- BluetoothSerial Library

---

#  Circuit Connections

## MAX30102

| MAX30102 | ESP32 |
|-----------|-------|
| VIN | 3.3V |
| GND | GND |
| SDA | GPIO21 |
| SCL | GPIO22 |

---

## OLED Display

| OLED | ESP32 |
|-------|-------|
| VCC | 3.3V |
| GND | GND |
| SDA | GPIO21 |
| SCL | GPIO22 |

---

## LM35

| LM35 | ESP32 |
|-------|-------|
| VCC | 3.3V |
| GND | GND |
| OUT | GPIO34 |

---

## Buzzer

| Buzzer | ESP32 |
|---------|-------|
| + | GPIO25 |
| - | GND |

---

#  Working Principle

1. ESP32 initializes all connected sensors.
2. MAX30102 measures Heart Rate and Blood Oxygen.
3. LM35 measures body temperature.
4. ESP32 processes sensor values.
5. Data is displayed on OLED.
6. Sensor values are transmitted to a smartphone via Bluetooth.
7. If abnormal conditions are detected, the buzzer activates.
8. The process repeats continuously every few milliseconds.

---

#  Parameters Monitored

| Parameter | Unit |
|------------|------|
| Heart Rate | BPM |
| Blood Oxygen | % |
| Temperature | °C |

---

#  Bluetooth Output Example

```
HR:72
SpO2:97%
Temp:36.5°C
Status:Healthy
```

---

#  OLED Display Example

```
HR:72

SpO2:97%

Temp:36.5C

Status:Healthy
```

---

#  Repository Structure

```
Wearable-IoT-Health-Monitoring-Glove
│
├── code
│   └── health_glove.ino
│
├── images
│   ├── project.jpg
│   ├── oled.jpg
│   ├── result.jpg
│   ├── block_diagram.png
│   └── flowchart.png
│
├── circuit
│   └── circuit_diagram.png
│
├── docs
│   └── Project_Report.pdf
│
├── README.md
├── LICENSE
└── .gitignore
```

---

#  Installation

Clone the repository

```bash
git clone https://github.com/yourusername/Wearable-IoT-Health-Monitoring-Glove.git
```

Open the Arduino sketch

```
code/health_glove.ino
```

Install the required libraries.

Select:

- ESP32 Dev Module
- Correct COM Port

Upload the code.

---

#  Usage

1. Connect all sensors.
2. Power the ESP32.
3. Pair your smartphone with Bluetooth device **HealthGlove**.
4. Open any Bluetooth Serial Terminal app.
5. Place your finger on the MAX30102 sensor.
6. View Heart Rate, SpO₂, and Temperature.
7. Observe OLED display and Bluetooth output.

---

#  Results

The developed prototype successfully:

- Monitors Heart Rate
- Measures Blood Oxygen
- Reads Body Temperature
- Displays readings on OLED
- Sends data wirelessly via Bluetooth
- Provides real-time monitoring

---

#  Applications

- High Altitude Safety
- Mountain Climbers
- Trekkers
- Military Personnel
- Remote Patient Monitoring
- Healthcare Research
- Elderly Care
- Smart Healthcare

---

#  Future Improvements

- Wi-Fi IoT Cloud Integration
- Mobile Application
- GPS Tracking
- Emergency SOS Alerts
- Firebase Database
- AI-based Health Prediction
- Rechargeable Battery
- Compact PCB Design

---

#  Screenshots

Add images inside the **images** folder.

Example:

```
images/project.jpg

images/block_diagram.png

images/flowchart.png

images/result.jpg
```

---

#  Demo Video

Add your project demonstration video link here.

Example

```
https://youtu.be/your-video-link
```

---

#  Author

**Abhishek Alankara**

B.Tech Electronics and Communication Engineering

SRM University AP

GitHub: https://github.com/yourusername

LinkedIn: https://linkedin.com/in/yourprofile

---

#  License

This project is licensed under the MIT License.

---

#  Support

If you found this project useful, please consider giving it a ⭐ on GitHub. It helps others discover the project and supports future development.

Thank you for visiting this repository! 😊
