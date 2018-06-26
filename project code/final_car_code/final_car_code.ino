
int x = 7;
int y = 8;
int z = 4;
int w = 9;
int button ;
void forward ( )
{
digitalWrite(x,HIGH);
digitalWrite(y,LOW);
digitalWrite(z,HIGH);
digitalWrite(w,LOW);
analogWrite(3,255);
analogWrite(5,255);
}
void right ( )
{
digitalWrite(x,HIGH);
digitalWrite(y,LOW);
digitalWrite(z,HIGH);
digitalWrite(w,LOW);
analogWrite(3,255);
analogWrite(5,0);
}





void left ( )
{
digitalWrite(x,HIGH);
digitalWrite(y,LOW);
digitalWrite(z,HIGH);
digitalWrite(w,LOW);
analogWrite(3,0);
analogWrite(5,255);
}
void backward ( )
{
digitalWrite(x,LOW);
digitalWrite(y,HIGH);
digitalWrite(z,LOW);
digitalWrite(w,HIGH);
analogWrite(3,255);
analogWrite(5,255);
}
void stop()
{
  analogWrite(3,0);
  analogWrite(5,0);
}



void setup() {
  // put your setup code here, to run once:
pinMode(x,OUTPUT);
pinMode(y,OUTPUT);
pinMode(w,OUTPUT);
pinMode(z,OUTPUT);
Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0)
{
button=Serial.read();
//if(button == 'S')
//{
//  stop();
//}
 if(button == 'F')
{
  forward();
 
}
else if(button == 'B')
{
  backward();
 
}
else if(button == 'R')
{
  right();
 
}
else if(button == 'L')
{
  left();
  
}

//switch(button){
//case 'F':forward(); break;
//case 'B':backward(); break;
//case 'R':right(); break;
//case 'L':left(); break;
//}

}
  // put your main code here, to run repeatedly:
//forward();
//delay(3000);
//backward();
//delay(3000);
//right();
//delay(3000);
}
