// C++ code
//
// Disponível em https://www.tinkercad.com/things/5dSVuIlYOVY

int led = 13;
int time = 0;

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  if(time%2==0)
  {
    digitalWrite(13, HIGH);
    delay(300);
    digitalWrite(13, LOW);
  	delay(300);
    digitalWrite(13, HIGH);
    delay(300);
    digitalWrite(13, LOW);
  	delay(1000);
    time=1;
  }
  else
  {
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
  	delay(1000);
    time=0;
  }
  
}
