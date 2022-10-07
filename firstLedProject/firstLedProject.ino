void setup() {
  pinMode(8, OUTPUT); // 8 numaralı digital pin den elektrik verecek şekilde çıkış
}

void loop() {
  digitalWrite(8, HIGH); // 8 numaralı pin den HIGH komutu ile elektrik çıkışı
  delay(1000); // 1000 milisaniye (1 saniye) bekleme.
  digitalWrite(8, LOW); // 8 numaralı pin den LOW komutu ile elektrik çıkışı durdurma
  delay(1000); // 1000 milisaniye (1 saniye) bekleme.
}