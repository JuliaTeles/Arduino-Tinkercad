// C++ code
//
// Disponível em https://www.tinkercad.com/things/dMEQmyNaUOK

int led = 2;
int botao = 10;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
}

void loop()
{
  if(digitalRead(botao) == LOW){
  	digitalWrite(led, HIGH);
  }
  else{
  	digitalWrite(led, LOW);
  }
}
