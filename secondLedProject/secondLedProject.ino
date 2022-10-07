#define button 8 
#define led 10

int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(button,INPUT);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(button);
if(buttonState==1){
  digitalWrite(led,HIGH);
}
else{
  digitalWrite(led,LOW);
}
}
