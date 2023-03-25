#include <Arduino.h>
#include <WiFi.h>

const char *ssid = "LAPTOP-HL7K9H6R 2729";
const char *password = "3|4254Ey";
const int puerto = 80;

void setup() {
  pinMode(2, OUTPUT); // Coloco el pin 2 como salida
}

void loop() {
  Serial.println("Led encendido");
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  Serial.println("Led apagado");
  delay(1000);
}