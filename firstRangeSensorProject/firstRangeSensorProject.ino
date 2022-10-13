#define echoPin 6
#define trigPin 7 
#define buzzerPin 8

int maximumRange = 50;
int minimumRange = 50;

void setup() {
  // put your setup code here, to run once:
pinMode(trigPin,OUTPUT);
pinMode(echoPin,OUTPUT);
pinMode(buzzerPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int olcum = range(maximumRange, minimumRange);
melody(olcum*10);
}

int range ( int maxRange, int minRange){
  long duration, distance;
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  duration = pulseIn(echoPin,HIGH); // Zamanı ölçüyoruz.
  distance = duration/58.2;
  delay(50);

  if(distance>=maxRange || distance<=minRange)
  return 0;
  return distance;
}

int melody ( int dly){
  tone(buzzerPin, 440);
  delay(dly);
  noTone(buzzerPin);
  delay(dly);
}
