
<div align="center">

# 🎓 Faculty of Information Technology (Dai Nam University)

## 🍎 SMART FRUIT SORTING SYSTEM USING ESP8266

### IoT and Smart Agriculture Project

<img src="fitdnu_logo.png" width="140"/>
<img src="dnu_logo.png" width="140"/>

</div>

---

<p align="center">

<img src="https://img.shields.io/badge/IoT-ESP8266-blue?style=for-the-badge"/>

<img src="https://img.shields.io/badge/Sensor-SRF05-green?style=for-the-badge"/>

<img src="https://img.shields.io/badge/Detection-IR%20Sensor-orange?style=for-the-badge"/>

<img src="https://img.shields.io/badge/Actuator-Servo%20SG90-red?style=for-the-badge"/>

<img src="https://img.shields.io/badge/Dashboard-Next.js-purple?style=for-the-badge"/>

<img src="https://img.shields.io/badge/Database-MongoDB-brightgreen?style=for-the-badge"/>

</p>

---

# 📖 Project Overview

This project develops an IoT-based Smart Fruit Sorting System using ESP8266 NodeMCU and multiple sensors.

The system automatically detects, measures, classifies, and sorts fruits based on their relative size. Data from the sorting process can be monitored through a web dashboard in real time.

### Features

✅ Fruit Detection using IR Sensor

✅ Distance Measurement using SRF05

✅ Automatic Fruit Classification

✅ Servo-based Sorting Mechanism

✅ LCD I2C Monitoring

✅ Real-time Statistics Counter

✅ WiFi Connectivity

✅ Web Dashboard Monitoring

---

# 🎯 Objectives

- Develop an automatic fruit sorting prototype.
- Apply IoT technology in agriculture.
- Classify fruits according to size.
- Monitor sorting statistics remotely.
- Demonstrate ESP8266 IoT applications.

---

# 🏗️ System Architecture

```text
+----------------------+
|   Fruit Prototype    |
+----------+-----------+
           |
           v
+----------------------+
|      IR Sensor       |
+----------+-----------+
           |
           v
+----------------------+
|      SRF05 Sensor    |
+----------+-----------+
           |
           v
+----------------------+
|    ESP8266 NodeMCU   |
+----------+-----------+
           |
    +------+------+
    |             |
    v             v
+------+     +----------+
|Servo |     | LCD I2C  |
+------+     +----------+
    |
    v
Fruit Sorted

           |
           v
+----------------------+
| Next.js Dashboard    |
| Node.js + MongoDB    |
+----------------------+
````

---

# ⚙️ Hardware Components

| Component               | Quantity |
| ----------------------- | -------- |
| ESP8266 NodeMCU         | 1        |
| SRF05 Ultrasonic Sensor | 1        |
| IR Sensor               | 1        |
| Servo SG90              | 1        |
| LCD I2C 16x2            | 1        |
| Breadboard              | 1        |
| Jumper Wires            | Several  |

---

# 📂 Classification Logic

## Banana

```text
Distance < 10 cm
```

## Orange

```text
10 cm <= Distance < 20 cm
```

## Apple

```text
Distance >= 20 cm
```

---

# 🔄 System Workflow

```text
Fruit Enter
      |
      v
IR Sensor Detects Object
      |
      v
SRF05 Measures Distance
      |
      v
ESP8266 Processes Data
      |
      v
Fruit Classification
      |
      +----> Banana
      |
      +----> Orange
      |
      +----> Apple
      |
      v
Servo Sorting
      |
      v
Counter Update
      |
      v
LCD Display Update
      |
      v
Dashboard Update
```

---

# 📊 Current Project Status

| Module                | Status |
| --------------------- | ------ |
| ESP8266 Setup         | ✅      |
| IR Sensor             | ✅      |
| SRF05 Sensor          | ✅      |
| Servo SG90            | ✅      |
| LCD I2C               | ✅      |
| Fruit Counter         | ✅      |
| WiFi Communication    | 🔄     |
| Dashboard Integration | 🔄     |
| MongoDB Storage       | 🔄     |

---

# 📁 Project Structure

```text
fruit-sorting-system-iot/
│
├── src/
│   ├── main.cpp
│
├── include/
│
├── lib/
│
├── dashboard/
│   ├── frontend/
│   ├── backend/
│   └── database/
│
├── docs/
│
├── platformio.ini
│
└── README.md
```

---

# 🔮 Future Development

* Computer Vision Fruit Recognition
* TCS3200 Color Detection
* Conveyor Belt Integration
* Mobile Application
* Cloud IoT Deployment
* Advanced Analytics Dashboard

---

# 👨‍🎓 Student Information

**Name:** Dang Le Hoang Anh

**Faculty:** Information Technology

**University:** Dai Nam University

**Project:** Smart Fruit Sorting System Using ESP8266

**Technology:** ESP8266, SRF05, IR Sensor, Servo SG90, LCD I2C, Next.js, Node.js, MongoDB

```
```
