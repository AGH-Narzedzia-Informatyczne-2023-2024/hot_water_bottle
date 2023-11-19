// example of arduino code for changing lights
// for better understanding of processes in main project

void setup() {
  // put your setup code here, to run once:
pinMode(1, INPUT);
pinMode(2, INPUT);
pinMode(8, INPUT);
pinMode(9, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(1, HIGH);
delay(1000);
digitalWrite(1, LOW);
delay(500);
digitalWrite(2, HIGH);
delay(1000);
digitalWrite(2, LOW);
delay(500);
digitalWrite(8, HIGH);
delay(1000);
digitalWrite(8, LOW);
delay(500);
digitalWrite(9, HIGH);
delay(1000);
digitalWrite(9, LOW);
delay(500);
}
