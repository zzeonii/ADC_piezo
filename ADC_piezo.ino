//const int ledPin = 10;
const int piezo = 10;
const int analogPin = A0;


void setup() {
  Serial.begin(115200);
}

void loop() {
  int sensorInput = analogRead(analogPin);
  analogWrite(piezo, sensorInput/4);
  Serial.println(sensorInput/4);
  
}
