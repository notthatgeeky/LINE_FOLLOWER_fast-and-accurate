const int IR_sensor1 = 9;
const int IR_sensor2 = 8;
const int IR_sensor3 = 7;
const int IR_sensor4 = 6;
const int IR_sensor5 = 5;
const int IR_sensor6 = 4;
const int IR_sensor7 = 3;
const int IR_sensor8 = 2;
 // Define IR sensor  pin

void setup() {
  pinMode(IR_sensor1, INPUT);
  pinMode(IR_sensor2, INPUT);
  pinMode(IR_sensor3, INPUT);
  pinMode(IR_sensor4, INPUT);
  pinMode(IR_sensor5, INPUT);
  pinMode(IR_sensor6, INPUT);
  pinMode(IR_sensor7, INPUT);
  pinMode(IR_sensor8, INPUT); // Set IR sensor pin as input
  Serial.begin(9600); // Start serial communication
}

void loop() {
  int sensorValue1 = digitalRead(IR_sensor1);
  int sensorValue2 = digitalRead(IR_sensor2);
  int sensorValue3 = digitalRead(IR_sensor3);
  int sensorValue4 = digitalRead(IR_sensor5);
  int sensorValue5 = digitalRead(IR_sensor6);
  int sensorValue6 = digitalRead(IR_sensor7);
  int sensorValue7 = digitalRead(IR_sensor8);
  int sensorValue8 = digitalRead(IR_sensor4); // Read IR sensor value
  //Serial.print("Sensor 1: ");
Serial.print(sensorValue1);
//Serial.print("  Sensor 2: ");
Serial.print(sensorValue2);
//Serial.print("Sensor 3: ");
Serial.print(sensorValue3);
//Serial.print("  Sensor 4: ");
Serial.print(sensorValue4);
//Serial.print("Sensor 5: ");
Serial.print(sensorValue5);
//Serial.print("  Sensor 6: ");
Serial.print(sensorValue6);
//Serial.print("Sensor 7: ");
Serial.print(sensorValue7);
//Serial.print("  Sensor 8: ");
Serial.print(sensorValue8);
Serial.println("  ");
delay(1500);
}