int LED1 = 10;
int LED2 = 11;
int LED3 = 12;
int switch1 = 2;
int switch2 = 3;
int switch3 = 4;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(switch1, INPUT);
  pinMode(switch2, INPUT);
  pinMode(switch3, INPUT);

}

void loop() {
  if(digitalRead(switch1) == HIGH) 
  {
    digitalWrite(LED1, HIGH);
  }
  else
  {
    digitalWrite(LED1, LOW);
  }

  if(digitalRead(switch2) == HIGH) 
  {
    digitalWrite(LED2, HIGH);
  }
  else
  {
    digitalWrite(LED2, LOW);
  }

  if(digitalRead(switch3) == HIGH) 
  {
    digitalWrite(LED3, HIGH);
  }
  else
  {
    digitalWrite(LED3, LOW);
  }
}
