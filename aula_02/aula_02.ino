int led =10;

void setup() {
  // put your setup code here, to run once:
 
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(50);
  digitalWrite(led,LOW);
  delay(50);

}
