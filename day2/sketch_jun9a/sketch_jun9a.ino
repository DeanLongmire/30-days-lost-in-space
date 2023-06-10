int light = 12; //pin 12

void setup() {
  pinMode(light, OUTPUT);
  digitalWrite(light, LOW);
}

void loop() {
  digitalWrite(light, LOW);
  delay(50);
  digitalWrite(light, HIGH);
  delay(50);
}
