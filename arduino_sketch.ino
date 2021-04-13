void setup() {

Serial.begin(9600);
}
void loop() {
// read the input on analog pin 0:
int sensorValue = analogRead(A0);
// print out the value you read:
Serial.print(“This is from Arduino:”);
Serial.println(sensorValue);
delay(2000); // delay in between reads for stability
}void setup() {

Serial.begin(9600);
}
void loop() {
// read the input on analog pin 0:
int sensorValue = analogRead(A0);
// print out the value you read:
Serial.print(“This is from Arduino:”);
Serial.println(sensorValue);
delay(2000); // delay in between reads for stability
}
