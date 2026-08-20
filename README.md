# IoT-Based Digital Twin Dashboard for Industrial Machine Monitoring

## Project Description

An IoT-based industrial machine monitoring prototype that collects and simulates machine parameters such as temperature, vibration, and rotational speed using an ESP32. The machine data is transmitted through MQTT and processed using Node-RED to provide a real-time monitoring dashboard with machine status, trend visualization, and threshold-based alerts.

The project demonstrates the basic concept of creating a digital representation of machine operating conditions using IoT data.

## Problem Statement

Industrial machines need continuous monitoring to identify abnormal operating conditions and reduce unexpected downtime.

Traditional monitoring methods may require manual observation and may not provide an easy way to visualize machine parameters in real time.

This project demonstrates how IoT communication and a dashboard can be used to monitor important machine parameters from a centralized interface.

## Objective

To design and develop an IoT-based machine monitoring prototype that:

* Collects or simulates industrial machine parameters using ESP32
* Transmits machine data using MQTT
* Uses Mosquitto as the MQTT broker
* Processes machine data using Node-RED
* Displays machine parameters on a dashboard
* Provides threshold-based machine status
* Displays basic alerts for abnormal parameter values

## Features

* ESP32-based machine monitoring
* Simulated machine sensor data
* Temperature monitoring
* Vibration monitoring
* RPM monitoring
* MQTT-based communication
* Mosquitto MQTT broker
* Node-RED data processing
* Real-time dashboard visualization
* Gauge-based parameter display
* Trend charts
* Machine status indicators
* Threshold-based alerts
* MQTT message testing using MQTT Explorer

## Technologies Used

* **Hardware:** ESP32 DevKit
* **Programming:** Arduino / C++
* **Communication:** Wi-Fi, MQTT
* **MQTT Broker:** Mosquitto
* **Dashboard:** Node-RED Dashboard
* **Data Processing:** Node-RED Function Nodes / JavaScript
* **Testing:** MQTT Explorer
* **Development Environment:** Arduino IDE, Node-RED

## Architecture

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
```

## Workflow

1. ESP32 connects to the Wi-Fi network.
2. ESP32 generates or collects machine parameter values.
3. ESP32 publishes the values through MQTT.
4. Mosquitto receives the MQTT messages.
5. Node-RED subscribes to the MQTT topics.
6. Node-RED processes the received machine data.
7. Threshold logic determines the machine status.
8. The dashboard displays the machine parameters and status.
9. MQTT Explorer can be used to verify MQTT communication.

## Machine Parameters

The prototype focuses on three important machine parameters:

| Parameter   | Purpose                          |
| ----------- | -------------------------------- |
| Temperature | Monitors machine temperature     |
| Vibration   | Monitors machine vibration level |
| RPM         | Monitors rotational speed        |

## Machine Status

The dashboard uses threshold-based logic to indicate the machine condition:

* **Healthy** — Parameters are within the normal range
* **Warning** — A parameter is approaching a defined threshold
* **Critical** — A parameter exceeds a defined threshold
* **Offline** — Machine data is not being received

The exact threshold values are defined in the Node-RED flow according to the project configuration.

## Digital Twin Concept

The project demonstrates the concept of representing machine operating conditions digitally using data received from an industrial machine or simulated sensor source.

The current implementation mainly follows a one-way monitoring architecture:

```text
Physical Machine / Sensor Data
            ↓
          ESP32
            ↓
           MQTT
            ↓
        Node-RED
            ↓
         Dashboard
```

Therefore, the current academic prototype is more accurately described as a **Digital Shadow / one-way digital monitoring system** rather than a complete two-way Digital Twin.

## Dashboard

The Node-RED dashboard provides:

* Temperature gauge
* Vibration gauge
* RPM display
* Trend charts
* Machine status
* Threshold-based alerts

The dashboard allows the machine parameters to be monitored from a centralized interface.

## MQTT Communication

MQTT follows a publish/subscribe communication model.

The basic communication flow is:

```text
ESP32
   ↓
MQTT Publish
   ↓
Mosquitto Broker
   ↓
MQTT Subscribe
   ↓
Node-RED
```

MQTT Explorer can be used to monitor the published topics and verify that the machine data is being transmitted correctly.

## Project Structure

```text
IoT-Digital-Twin-Dashboard/
│
├── README.md
├── .gitignore
│
├── esp32/
│   └── industrial_machine_monitor.ino
│
├── node-red/
│   └── flow.json
│
└── documentation/
    └── setup.md
```

## Installation

### 1. ESP32 Setup

Install Arduino IDE and configure it for the ESP32 board.

Open:

```text
esp32/industrial_machine_monitor.ino
```

Enter your local Wi-Fi and MQTT configuration.

Do not commit real passwords or private credentials to GitHub.

### 2. MQTT Broker Setup

Install Mosquitto MQTT Broker.

Start the broker and verify that it is running.

### 3. Node-RED Setup

Install and start Node-RED.

Import:

```text
node-red/flow.json
```

Configure the MQTT broker connection if required.

Deploy the Node-RED flow.

### 4. Dashboard

Open the Node-RED dashboard and monitor the machine parameters.

### 5. MQTT Testing

Use MQTT Explorer to verify that MQTT messages are being published and received correctly.

## Running Instructions

1. Connect the ESP32 to the computer.
2. Open the ESP32 program in Arduino IDE.
3. Configure Wi-Fi and MQTT settings.
4. Upload the program to the ESP32.
5. Start the Mosquitto MQTT broker.
6. Start Node-RED.
7. Import the Node-RED flow.
8. Deploy the flow.
9. Open the Node-RED dashboard.
10. Monitor temperature, vibration, RPM, machine status, and alerts.

## Sample Monitoring Output

Example:

```text
Temperature: 30.5 °C
Vibration: 2.5 mm/s
RPM: 1500

Machine Status: HEALTHY
```

The actual values depend on the sensor or simulated data generated by the ESP32.

## Limitations

* This is an academic IoT prototype.
* The project does not implement machine learning.
* The project does not perform predictive maintenance.
* The prototype primarily focuses on one-way machine monitoring.
* No automatic machine control is implemented.
* No industrial PLC integration is implemented.
* Simulated sensor data may be used when physical sensors are not connected.

## Future Enhancements

* Integration with real industrial sensors
* Historical data storage
* Database integration
* Real-time data analytics
* Machine learning-based predictive maintenance
* Two-way communication
* Automatic machine control
* Integration with industrial PLCs
* Advanced industrial dashboards

## Skills Demonstrated

* ESP32 programming
* IoT fundamentals
* MQTT communication
* Publish/Subscribe architecture
* Mosquitto MQTT Broker
* Node-RED
* JavaScript Function Nodes
* Dashboard development
* Threshold-based monitoring
* Industrial machine monitoring
* Industry 4.0 concepts
* Digital Twin / Digital Shadow concepts
* IoT system architecture
* Git and GitHub

## Author

**Suhas M Bharadwaj**

B.E. Mechanical Engineering
JSS Science and Technology University, Mysuru
