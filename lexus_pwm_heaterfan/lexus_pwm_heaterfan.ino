
int pwmPin = 3;      // LED connected to digital pin 9
int val = 100;         // variable to store the read value

void setup()
{
  pinMode(pwmPin, OUTPUT);   // sets the pin as output
}

void loop()
{
  analogWrite(pwmPin, 130);  // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
}

