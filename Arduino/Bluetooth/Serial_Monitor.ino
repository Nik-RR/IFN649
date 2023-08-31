void setup()   {                
  Serial.begin(9600);
  Serial1.begin(9600);
}

void loop()                     
{
  Serial.println("Hello World");
  Serial1.println("Hello via BT!");
  delay(1000);
}
