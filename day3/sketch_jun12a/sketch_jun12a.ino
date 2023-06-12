int LED = 12;
int switch1 = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(switch1, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(switch1) == HIGH)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
}
