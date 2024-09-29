#define led 8
#define min 0
#define max 255
#define tmp 50

void setup() {
  // put your setup code here, to run once:

  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  for(int i = min; i < max; i++){
    analogWrite(led,i);
    delay(tmp);
  }
 
 for(int i = max; i > min; i--){
  analogWrite(led,i);
  delay(tmp);
 }

  
  
  
  
}
