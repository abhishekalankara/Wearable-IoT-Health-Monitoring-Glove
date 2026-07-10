# Wearable-Health-Monitoring-Glove-for-High-Altitude-Safety

Developed a wearable IoT-based health monitoring glove using ESP32, MAX30102, and LM35 to monitor heart rate, SpO₂, and body temperature in real time. The system transmits data via Bluetooth and provides alerts for abnormal conditions, improving safety in high-altitude environments.

---

## Overview

The Wearable IoT-Based Health Monitoring Glove is an embedded healthcare solution developed to improve safety in high-altitude environments. The system continuously monitors vital physiological parameters, including heart rate, oxygen saturation (SpO₂), and body temperature, using integrated biomedical sensors. The collected data is processed by an ESP32 microcontroller, displayed on an OLED screen, and wirelessly transmitted to a smartphone through Bluetooth. By providing instant health status updates and alerts, the device enables early detection of altitude-related health issues while remaining portable, lightweight, and cost-effective. 

---

## Project Objective

The primary objective of this project is to design and develop a wearable health monitoring device capable of continuously tracking essential body parameters in real time. The system aims to enhance safety for trekkers, mountaineers, rescue personnel, and high-altitude workers by detecting abnormal health conditions and immediately notifying users through visual and audio alerts. Its compact design and wireless connectivity make it suitable for both outdoor and healthcare applications. 

---

## How It Works

The wearable glove continuously acquires physiological data through the MAX30102 pulse oximeter sensor and the LM35 temperature sensor. The ESP32 processes the incoming sensor data to calculate heart rate, blood oxygen saturation, and body temperature. These measurements are displayed on the OLED display for immediate user reference while simultaneously being transmitted to a mobile device via Bluetooth. Whenever any measured parameter exceeds the predefined safe range, the ESP32 activates a buzzer and updates the health status, allowing users to respond quickly to potential medical emergencies. 

---

## Key Features

The Health Monitoring Glove provides continuous monitoring of heart rate, blood oxygen saturation, and body temperature in a compact wearable device. It offers real-time OLED visualization, Bluetooth-based wireless communication with smartphones, automatic abnormal health detection, and instant buzzer alerts for emergency situations. Designed with portability and low power consumption in mind, the system provides a practical and affordable solution for monitoring health in challenging environments. 

---

## Technologies Used

This project combines embedded systems, biomedical sensors, and wireless communication technologies to build a real-time health monitoring platform.

**Hardware**
- ESP32 Development Board
- MAX30102 Pulse Oximeter Sensor
- LM35 Temperature Sensor
- OLED Display (SSD1306)
- Buzzer
- Li-Po Battery
- Wearable Glove

**Software**
- Arduino IDE
- Embedded C/C++
- ESP32 Bluetooth Library
- Adafruit SSD1306 Library
- Wire Library

---

## System Architecture

The system architecture consists of three major layers. The sensing layer includes the MAX30102 sensor for measuring heart rate and blood oxygen levels, along with the LM35 temperature sensor for monitoring body temperature. The processing layer uses an ESP32 microcontroller to collect sensor data, analyze health parameters, and determine whether the readings fall within safe operating limits. The output layer consists of an OLED display for real-time visualization, a buzzer for emergency alerts, and Bluetooth communication that sends health information directly to a mobile application for remote monitoring.

---

## Applications

The wearable health monitoring glove is suitable for high-altitude trekking, mountain expeditions, rescue operations, military personnel, healthcare monitoring, elderly patient care, sports and fitness tracking, and industrial workers operating in extreme environmental conditions. Its portable design allows continuous health monitoring wherever immediate medical assistance may not be readily available. 

---

## Future Scope

The project can be further enhanced by integrating GPS-based location tracking, cloud-based IoT monitoring, GSM or Wi-Fi communication for remote healthcare services, AI-based health prediction, rechargeable wearable modules, mobile application dashboards, cloud data logging, and emergency SOS notifications to caregivers or medical professionals. These improvements would make the device more suitable for commercial healthcare and remote patient monitoring applications. 

---

## Conclusion

The Wearable IoT-Based Health Monitoring Glove demonstrates the effective integration of biomedical sensors, embedded systems, and wireless communication into a compact wearable healthcare device. By continuously monitoring heart rate, blood oxygen saturation, and body temperature while providing instant alerts during abnormal conditions, the system improves user safety in high-altitude and remote environments. Its portability, affordability, and real-time monitoring capabilities make it a promising solution for future wearable healthcare technologies. 

---

## Contributors

- Alankara Abhishek
- Rayapati Siva Charan Chowdary
- Darapu Mohanth Sai Dinesh Reddy
- Tippireddy Manoj Reddy 


Department of Electronics and Communication Engineering

SRM University AP


---

## License

This project is developed for educational and academic purposes.
