
int pwmPin = 3;      // pin to heater connected to pin 3.
int val = 100;         // variable to store the pwm value

void setup()
{
  pinMode(pwmPin, OUTPUT);   // sets the pin as output
}

void loop()
{
  analogWrite(pwmPin, 130);  // analogWrite to pwm.
}

