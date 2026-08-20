#include <WiFi.h>
#include <PubSubClient.h>

// Wi-Fi details
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

// MQTT Broker
const char* mqtt_server = "YOUR_MQTT_BROKER_IP";

// MQTT topics
const char* temperatureTopic = "machine/temperature";
const char* vibrationTopic = "machine/vibration";
const char* rpmTopic = "machine/rpm";

WiFiClient espClient;
PubSubClient client(espClient);


// Connect ESP32 to Wi-Fi
void setupWiFi() {

  Serial.print("Connecting to Wi-Fi");

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {

    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("Wi-Fi connected.");
}


// Connect ESP32 to MQTT broker
void reconnectMQTT() {

  while (!client.connected()) {

    Serial.print("Connecting to MQTT...");

    if (client.connect("ESP32_Machine_Monitor")) {

      Serial.println("connected.");

    } else {

      Serial.print("Failed. State: ");
      Serial.println(client.state());

      delay(2000);
    }
  }
}


void setup() {

  Serial.begin(115200);

  setupWiFi();

  client.setServer(mqtt_server, 1883);

  randomSeed(analogRead(0));
}


void loop() {

  if (!client.connected()) {
    reconnectMQTT();
  }

  client.loop();


  // Simulated machine parameters
  float temperature = random(280, 351) / 10.0;
  float vibration = random(10, 50) / 10.0;
  int rpm = random(1000, 2001);


  // Convert values to text
  char temperatureValue[10];
  char vibrationValue[10];
  char rpmValue[10];

  dtostrf(temperature, 1, 2, temperatureValue);
  dtostrf(vibration, 1, 2, vibrationValue);
  sprintf(rpmValue, "%d", rpm);


  // Publish data using MQTT
  client.publish(
      temperatureTopic,
      temperatureValue
  );

  client.publish(
      vibrationTopic,
      vibrationValue
  );

  client.publish(
      rpmTopic,
      rpmValue
  );


  // Display values on Serial Monitor
  Serial.println("Machine Data:");

  Serial.print("Temperature: ");
  Serial.println(temperature);

  Serial.print("Vibration: ");
  Serial.println(vibration);

  Serial.print("RPM: ");
  Serial.println(rpm);

  Serial.println("--------------------");


  delay(5000);
}
