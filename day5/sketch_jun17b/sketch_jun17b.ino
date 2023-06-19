int DELAY = 60;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
   int i = random(2,12);
   Serial.println(i);
   digitalWrite(i,HIGH);
   delay(DELAY);
   digitalWrite(i,LOW);

  // digitalWrite(2,HIGH);
  // delay(DELAY);
  // digitalWrite(2,LOW);
  // digitalWrite(3,HIGH);
  // delay(DELAY);
  // digitalWrite(3,LOW);
  // digitalWrite(4,HIGH);
  // delay(DELAY);
  // digitalWrite(4,LOW);
  // digitalWrite(5,HIGH);
  // delay(DELAY);
  // digitalWrite(5,LOW);
  // digitalWrite(6,HIGH);
  // delay(DELAY);
  // digitalWrite(6,LOW);
  // digitalWrite(7,HIGH);
  // delay(DELAY);
  // digitalWrite(7,LOW);
  // digitalWrite(8,HIGH);
  // delay(DELAY);
  // digitalWrite(8,LOW);
  // digitalWrite(9,HIGH);
  // delay(DELAY);
  // digitalWrite(9,LOW);
  // digitalWrite(10,HIGH);
  // delay(DELAY);
  // digitalWrite(10,LOW);
  // digitalWrite(11,HIGH);
  // delay(DELAY);
  // digitalWrite(11,LOW);
}
