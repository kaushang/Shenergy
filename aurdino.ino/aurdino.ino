// Define analog input pins for sensors
const int currentSensorPin = A0;
const int voltageSensorPin = A1;

void setup() {
Serial.begin(9600); // Initialize serial communication for debugging
}

void loop() {
// Read the analog values from sensors
int currentReading = analogRead(currentSensorPin);
int voltageReading = analogRead(voltageSensorPin);

// Convert analog readings to actual current and voltage values
float current = map(currentReading, 0, 1023, 0, 5); // Assuming 5V power supply
float voltage = map(voltageReading, 0, 1023, 0, 5000); // Assuming 5V power supply

// Print the values to the serial monitor
Serial.print("Current: ");
Serial.print(current);
Serial.print("A, Voltage: ");
Serial.print(voltage);
Serial.println("V");

// Add your logic here for further processing or data transmission
delay(1000); // Adjust delay based on your project requirements
}