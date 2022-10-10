#define led 3 // 3 numaralı pini led olarak isimlendiriyoruz.

void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int light = analogRead(A0);
Serial.println(light);
delay(100);
if(light>500){
  digitalWrite(led,LOW);
}
if(light<400){
  digitalWrite(led,HIGH);
}
}
