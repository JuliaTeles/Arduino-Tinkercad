//C++
//
// Disponível em https://www.tinkercad.com/things/45tPmdcHi3U

#include <Servo.h>

Servo mm;
int led = 5;
int botao = 3;
int press = 0;
int cont = 0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
  Serial.begin(9600);
  mm.attach(4);
}

void loop()
{
 
  press = digitalRead(botao);
  if(press == HIGH){
  	digitalWrite(led, HIGH);
    mm.write(0);
    delay(4500);
  }
  else{
  	digitalWrite(led, LOW);
    mm.write(90);
  }
}
