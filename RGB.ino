int  led =  11;



void setup()
{
  pinMode(led, OUTPUT);
  
}

void loop()
{
  while(true){

  digitalWrite(led, HIGH);
  delay(15000);
  digitalWrite(led, LOW);
  delay(20000);
  digitalWrite(led, HIGH);
  delay(15000);
  digitalWrite(led, LOW);
  delay(20000);
  }


}
