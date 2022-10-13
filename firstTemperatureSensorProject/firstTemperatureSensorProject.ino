// LM35 Sensörü İle Sıcaklık Ölçme 
int lm35Pin = A0; // A0 pinini isimlendirme
int led = 8;
#define buzzer 9

int time = 100;
int readingValue = 0;
float tempVolt = 0;
float temp = 0;

void setup(){
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop(){
readingValue = analogRead(lm35Pin);
tempVolt = (readingValue/1023.0)*5000;
temp = tempVolt/10.0;
Serial.println(temp);
if(temp>=30){
  digitalWrite(led,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(time);
  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);
  delay(time);
}
else{
  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);
}
}