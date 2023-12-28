int sensorPin = A0;
int lightIndicator = 9;
int sensorValue = 0;
int lightLevel = 0;
unsigned int batteryCapacity = 5000;
unsigned int batteryLevel = 0;
unsigned int ticks = 0;
unsigned int wait = 100;
double percentFull = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightIndicator, OUTPUT);
}

void printBatteryPercentage() {
  Serial.print(ticks);
  Serial.print(" ms   charge at ");

  percentFull = 100 * ((double)batteryLevel / (double)batteryCapacity);

  Serial.print(percentFull);
  Serial.println("%");
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  batteryLevel += sensorValue;
  ticks += wait;

  lightLevel = (int)((percentFull/100) * 255);
  Serial.println(lightLevel);
  analogWrite(lightIndicator,lightLevel);
  
  if(batteryLevel >= batteryCapacity) {
    Serial.print(ticks);
    Serial.print(" ms   FULLY CHARGED\n");

    batteryLevel = batteryCapacity;
    ticks = 0;
    delay(20000);
  } else {
    printBatteryPercentage();
  }

  delay(wait);
}
