#define led_vermelho 8
#define led_amarelo 9
#define led_verde 10


 
 void setup() {
  // put your setup code here, to run once:

  pinMode(led_vermelho,OUTPUT);
  pinMode(led_amarelo,OUTPUT);
  pinMode(led_verde,OUTPUT);

}

void vermelho(){
  digitalWrite(led_vermelho,HIGH);
  digitalWrite(led_amarelo,LOW);
  digitalWrite(led_verde,LOW);
}

void amarelo(){
  digitalWrite(led_vermelho,LOW);
  digitalWrite(led_amarelo,HIGH);
  digitalWrite(led_verde,LOW);
}

void verde(){
  digitalWrite(led_vermelho,LOW);
  digitalWrite(led_amarelo,LOW);
  digitalWrite(led_verde,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  vermelho();
  delay(5000);

  amarelo();
  delay(1000);

  verde();
  delay(3000);



}
