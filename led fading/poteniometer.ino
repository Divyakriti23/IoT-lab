void setup()
{  Serial.begin(9600);
  pinMode(9,OUTPUT);
  
}

void loop()
{ int analog=analogRead(A2);
  int brightness=map(analog, 0, 1023, 0, 255);
  analogWrite(9, brightness);
  Serial.print("analog:");
  Serial.print(analog);
  Serial.print(", Brightness:");
  Serial.print(brightness);
  delay(100);

}
