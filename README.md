# Wearable IoT-Based Health Monitoring Glove for High-Altitude Safety

A wearable IoT-based health monitoring system developed using the ESP32 microcontroller for monitoring vital health parameters in high-altitude environments. The system measures Heart Rate (HR), Oxygen Saturation (SpO₂), and Body Temperature, displays the data on an OLED screen, transmits it to a mobile device via Bluetooth, and generates real-time alerts during abnormal health conditions.

---

## Table of Contents

- Overview
- Project Highlights
- Objectives
- System Architecture
- Hardware Components
- Project Workflow
- Features
- Results
- Technologies Used
- Repository Structure
- Applications
- Future Work
- Author
- License

---

## Overview

High-altitude environments pose significant health risks due to reduced oxygen availability, leading to conditions such as hypoxia and altitude sickness.

This project presents a wearable IoT-based health monitoring glove that continuously monitors vital physiological parameters and provides real-time health updates. The system combines biomedical sensors, wireless communication, and embedded processing to improve user safety in challenging environments.

The measured parameters include:

- Heart Rate (HR)
- Blood Oxygen Saturation (SpO₂)
- Body Temperature

The collected data is displayed locally on an OLED display and transmitted wirelessly to a mobile application through Bluetooth. If abnormal readings are detected, the system immediately alerts the user using a buzzer.

---

## Project Highlights

- ESP32-based wearable health monitoring system
- Real-time Heart Rate monitoring
- Blood Oxygen (SpO₂) measurement
- Body Temperature monitoring
- OLED display for live data visualization
- Bluetooth-based wireless communication
- Mobile health monitoring
- Automatic abnormal health detection
- Buzzer alert system
- Portable and low-cost wearable solution

---

## Objectives

- Design a wearable health monitoring system for high-altitude safety.
- Measure Heart Rate and SpO₂.
- Monitor body temperature.
- Detect abnormal health conditions.
- Transmit health data to a mobile device via Bluetooth.
- Provide real-time alerts for emergency situations.

---

## System Architecture

The system consists of:

### Input Sensors

- MAX30102 Pulse Oximeter Sensor
- LM35 Temperature Sensor

### Processing Unit

- ESP32 Microcontroller

### Output Devices

- OLED Display (SSD1306)
- Bluetooth Module (ESP32 Built-in)
- Mobile Phone
- Buzzer

The ESP32 collects sensor readings, processes the data, displays the measurements on the OLED display, transmits them to a mobile phone through Bluetooth, and activates the buzzer whenever abnormal readings are detected.

---

## Hardware Components

| Component | Purpose |
|-----------|----------|
| ESP32 | Main processing unit |
| MAX30102 | Heart Rate & SpO₂ Sensor |
| LM35 | Temperature Sensor |
| OLED Display | Display health parameters |
| Buzzer | Alert system |
| Bluetooth | Wireless communication |
| Li-Po Battery | Power supply |

---

## Project Workflow

```text
START
   │
Initialize ESP32
   │
Initialize Sensors
   │
Read Heart Rate
Read SpO₂
Read Temperature
   │
Process Sensor Data
   │
Display Data on OLED
   │
Send Data via Bluetooth
   │
Check Health Conditions
   │
 ┌───────────────┐
 │Normal Values? │
 └──────┬────────┘
        │
   Yes  │  No
        │
Healthy Status
        │
Activate Buzzer
Display Warning
        │
Repeat Monitoring
```

---

## Features

- Continuous Heart Rate Monitoring
- Continuous SpO₂ Monitoring
- Body Temperature Measurement
- OLED Display Interface
- Bluetooth Communication
- Mobile Health Monitoring
- Emergency Alert System
- Portable Wearable Design
- Low Power Consumption
- Cost-effective Implementation

---

# Results

The developed prototype successfully monitored vital health parameters and transmitted the readings wirelessly to a mobile device.

The system successfully:

- Measured Heart Rate
- Measured Blood Oxygen Saturation (SpO₂)
- Measured Body Temperature
- Displayed data on OLED Display
- Sent data to a mobile phone through Bluetooth
- Generated buzzer alerts for abnormal conditions

The prototype demonstrated reliable operation as a portable and low-cost health monitoring solution for high-altitude safety.

---

## Technologies Used

### Programming Language

- Embedded C / Arduino

### Development Environment

- Arduino IDE

### Microcontroller

- ESP32

### Sensors

- MAX30102
- LM35

### Communication

- Bluetooth

### Display

- SSD1306 OLED Display

---

## Repository Structure

```text
Wearable-IoT-Health-Monitoring-Glove/

│
├── images/
│   ├── block_diagram.png
│   ├── flowchart.png
│   ├── hardware_setup.jpg
│   ├── prototype.jpg
│   └── results.jpg
│
├── src/
│   └── health_monitoring_glove.ino
│
├── README.md
├── LICENSE
├── requirements.txt
└── .gitignore
```

---

## Applications

- High-altitude Safety
- Trekking
- Mountaineering
- Military Personnel
- Healthcare Monitoring
- Remote Patient Monitoring
- Emergency Medical Assistance
- Wearable IoT Systems

---

## Future Work

- Compact glove-based wearable design
- Integration with IoT cloud platforms
- Wi-Fi based remote monitoring
- GPS-based emergency tracking
- Mobile application development
- AI-based health prediction
- Battery optimization
- Additional biomedical sensors

---

## Author

**Abhishek Alankara**

B.Tech – Electronics and Communication Engineering

SRM University-AP

**LinkedIn:** https://www.linkedin.com/in/abhishekalankara/

**GitHub:** https://github.com/abhishekalankara

---

## Acknowledgements

I would like to express my sincere gratitude to the faculty members and mentors of the Department of Electronics and Communication Engineering, SRM University-AP, for their continuous guidance and support throughout this project. I also acknowledge the open-source community for providing the software tools, development platforms, and hardware libraries that contributed to the successful implementation of this project.

---

## License

This project is licensed under the **MIT License**.

---

If you found this project useful, consider giving this repository a **Star**.
