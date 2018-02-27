
int analogpin0 = A0;   
int analogpin1 = A1; 
int analogpin2 = A2;
int analogpin3 = A3;
int analogpin4 = A4;
int analogpin5 = A5; 

int counter=0;
int buttonstate=0;
int lastbuttonstate=0;


int switchpin = 2; 
int sensorValue0=0;
int sensorValue1=0;
int sensorValue2=0;
int sensorValue3=0;
int sensorValue4=0;
int sensorValue5=0;

int ledPin0 = 13; 

void setup() {
  pinMode(switchpin, INPUT);
  pinMode(ledPin0, OUTPUT);

}

void loop() {
  
  sensorValue0 = analogRead(analogpin0);
  sensorValue1 = analogRead(analogpin1);
  sensorValue2 = analogRead(analogpin2);
  sensorValue3 = analogRead(analogpin3);
  sensorValue4 = analogRead(analogpin4);
  sensorValue5 = analogRead(analogpin5);
  buttonstate=digitalRead(switchpin);
if (buttonstate != lastbuttonstate)
{
  if (buttonstate == HIGH) 
  {
counter++;
lastbuttonstate=HIGH;
  }
  else
  {
    lastbuttonstate=LOW;
  }
}
if(counter==1)
{
    digitalWrite(ledPin0, HIGH);
    delay(sensorValue0*1000);
    digitalWrite(ledPin0, LOW);
}
else if(counter==2)
{

    digitalWrite(ledPin0, HIGH);
    delay(sensorValue1*1000);
        digitalWrite(ledPin0, LOW);
}
else if(counter==3)
{

    digitalWrite(ledPin0, HIGH);
    delay(sensorValue2*1000);
        digitalWrite(ledPin0, LOW);
}
else if(counter==4)
{

    digitalWrite(ledPin0, HIGH);
    delay(sensorValue3*1000);
        digitalWrite(ledPin0, LOW);
}
else if(counter==5)
{

    digitalWrite(ledPin0, HIGH);
    delay(sensorValue4*1000);
        digitalWrite(ledPin0, LOW);
}
else if(counter==6)
{

    digitalWrite(ledPin0, HIGH);
    delay(sensorValue5*1000);
     digitalWrite(ledPin0, LOW);
}
else
{
    digitalWrite(ledPin0, LOW);

}
}
