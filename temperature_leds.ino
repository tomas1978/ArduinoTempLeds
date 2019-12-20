/* 	
This program turns on a red LED if temperature detected
on TMP36 sensor is greater than raw analog value 230 
*/
int analogSensorPin = A0;
int tempSensorValue;
int redLed = 4;


void setup()
{
  pinMode(redLed = 4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  tempSensorValue = analogRead(analogSensorPin);
  Serial.println(tempSensorValue);
  if(tempSensorValue>230)
  {
  	digitalWrite(redLed, HIGH);
  }
  else 
  {
  	digitalWrite(redLed, LOW);
  }
}
