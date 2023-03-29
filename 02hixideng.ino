void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}
int level=0;
int idx=0;
int ports[3]={3, 5, 6};
void loop() {
  analogWrite(ports[idx],level);
  delay(100);
  ++level %=4;
  ++idx %=3;
}
