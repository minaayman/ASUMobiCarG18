volatile int n = 0;
// this code is used to test photo interrupter
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(2), measure, RISING );

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(n);
  delay(100);
}
void measure()
{
  n++;
  
}

