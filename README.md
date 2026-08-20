# IoT-Based Digital Twin Dashboard for Industrial Machine Monitoring

## Project Overview

This project is an IoT-based prototype for monitoring industrial machine parameters using ESP32, MQTT and Node-RED.

The system collects or simulates machine parameters such as:

- Temperature
- Vibration
- RPM

The data is transmitted using MQTT and displayed on a Node-RED dashboard.

The dashboard provides real-time monitoring, status indicators, trend charts and threshold-based alerts.

## Objective

The main objectives of this project are:

- Monitor industrial machine parameters.
- Use ESP32 for sensor data collection/simulation.
- Transfer machine data using MQTT.
- Process the data using Node-RED.
- Display machine information on a dashboard.
- Provide basic machine status and threshold alerts.

## Technologies Used

- ESP32 DevKit
- Arduino IDE
- Wi-Fi
- MQTT
- Mosquitto MQTT Broker
- Node-RED
- Node-RED Dashboard
- JavaScript
- MQTT Explorer

## System Architecture

```text
ESP32
  |
  | Wi-Fi
  ↓
MQTT / Mosquitto Broker
  |
  | MQTT Messages
  ↓
Node-RED
  |
  ├── Data Processing
  ├── Threshold Logic
  └── Dashboard
       |
       ├── Temperature
       ├── Vibration
       ├── RPM
       ├── Machine Status
       └── Alerts
