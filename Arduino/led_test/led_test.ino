const int RED_OUT_LED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED_OUT_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  digitalWrite(RED_OUT_LED, HIGH);
  digitalWrite(RED_LED, HIGH);
  delay(1000);
  digitalWrite(RED_OUT_LED, LOW);
  digitalWrite(RED_LED, LOW);
  delay(1000);
}
