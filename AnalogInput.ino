/*
  Analog Input

  Demonstrates analog input by reading an analog sensor on analog pin 0 and
  turning on and off a light emitting diode(LED) connected to digital pin 13.
  The amount of time the LED will be on and off depends on the value obtained
  by analogRead().

  The circuit:
  - potentiometer
    center pin of the potentiometer to the analog input 0
    one side pin (either one) to ground
    the other side pin to +5V
  - LED
    anode (long leg) attached to digital output 13
    cathode (short leg) attached to ground

  - Note: because most Arduinos have a built-in LED attached to pin 13 on the
    board, the LED is optional.

  created by David Cuartielles
  modified 30 Aug 2011
  By Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogInput
*/

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
