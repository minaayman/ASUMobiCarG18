int analogpin0 = A0;    // select the input pin for the potentiometer
int analogpin1 = A1;    // select the input pin for the potentiometer
int analogpin2 = A2;    // select the input pin for the potentiometer

int ledPin0 = 13;      // select the pin for the LED
int ledPin1 = 12;      // select the pin for the LED
int ledPin2 = 11;      // select the pin for the LED

int sensorValue0=0;
int sensorValue1=0;
int sensorValue2=0;

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin0, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue0 = analogRead(analogpin0);
  sensorValue1 = analogRead(analogpin1);
  sensorValue2 = analogRead(analogpin2);

    if (sensorValue2 > sensorValue1) 
    {

      
if(sensorValue2>sensorValue0)
{
  digitalWrite(ledPin2, HIGH);
}
else
{
  digitalWrite(ledPin0, HIGH);
  }

  } 
  else 
  {

    
if(sensorValue1 >sensorValue0)
{
    digitalWrite(ledPin1, HIGH);
}
else
{
    digitalWrite(ledPin0, HIGH);
}
}
}
