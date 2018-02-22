//in this example I will connect a led that change color when reversing the polarity
//I will make it dimming then change color
int green = 3;
int red = 5;
int i ;
void setup() 
{
  pinMode(green,OUTPUT);
  pinMode(red,OUTPUT);
}

void loop()
{
for(i = 0; i <= 255;i++)
{
  analogWrite(green,i);
  digitalWrite(red,LOW);
  delay(50);
}
for(i;i>0;i--)
{
  analogWrite(red,i);
  digitalWrite(green,LOW);
  delay(50);
}

}
