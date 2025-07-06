const int MQ135_Pin = A0;

void setup() {
Serial.begin(9600);
}
void loop() {
int sensorValue = analogRead(MQ135_Pin);
Serial.print("MQ-135 Value: ");
Serial.println(sensorValue);
d