#define led 3 // 3 numaralı pine led ismini veriyoruz.
#define pot A0 // A0 pinine potPin ismini veriyoruz.

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
int value = analogRead(pot);
value = map(value, 0, 1023, 0, 255);
analogWrite(led, value);
}
