int trigger = 13;
int echo = 12;

long time1;
int distance;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);
  time1 = pulseIn(echo,HIGH);
  distance = time1*0.034/2;
  Serial.print("Distance: ");
  Serial.println(distance);

}
