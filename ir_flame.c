/*
    Project name :  IR Flame Sensor
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-ir-flame-sensor
*/

// Define the pin connected to the IR flame sensor
#define FLAME_SENSOR_PIN 2

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(FLAME_SENSOR_PIN, INPUT); // Set the sensor pin as input
}

void loop() {
  // Read the sensor value
  int flameValue = digitalRead(FLAME_SENSOR_PIN);
  
  // Check if flame is detected
  if (flameValue == HIGH) {
    Serial.println("Flame detected!"); // Print message if flame is detected
  } else {
    Serial.println("No flame detected"); // Print message if no flame is detected
  }
  
  delay(1000); // Delay for stability
}
