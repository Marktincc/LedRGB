int  led =  11;

//MARKTIN ANDRES CASTILLO CUERVO YY ANDREY YULIAN BENITEZ

void setup()
{
  pinMode(led, OUTPUT);
  
}

void loop()
{

  digitalWrite(led, HIGH);
  delay(15000);
  digitalWrite(led, LOW);
  delay(20000);
  digitalWrite(led, HIGH);
  delay(15000);
  digitalWrite(led, LOW);
  delay(20000);


}
