
const int blueLED = 7;
const int redLED = 6;

int randomNumber;

// digital pin 13
void setup()
{
  pinMode(blueLED, OUTPUT); // sets the digital
  pinMode(redLED, OUTPUT);
}

void loop()
{
  randomNumber = random(0,9);
  Serial.println(randomNumber);
  if(randomNumber >= 0 && randomNumber < 5)
  {
    digitalWrite(blueLED, HIGH);
  }
  else
  {
    digitalWrite(redLED, HIGH);
  }
  
  delay(1000); // waits for a second

  digitalWrite(blueLED, LOW);
  digitalWrite(redLED, LOW);
}
