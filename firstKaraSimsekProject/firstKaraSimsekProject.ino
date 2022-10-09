int leds [] = {2,3,4,5,6,7}; // ledlerin pinlerini tanımlıyoruz.

void setup() {
  for(int i=0;i<6;i++){
    pinMode(leds[i],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<6;i++){
  digitalWrite(leds[i],HIGH);
  delay(50);
  digitalWrite(leds[i],LOW);
  }

for(int j=5;j>-1;j--){
digitalWrite(leds[j],HIGH);
delay(200);
digitalWrite(leds[j],LOW);
}
}
