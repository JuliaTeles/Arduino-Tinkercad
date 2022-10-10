// C++ code
//
// Nome: Júlia Téles Cruz	RA: 200558
// Nome: Victor Hugo Betoni RA: 200154
// Data: 08/08/2022			3°INFD
// 
// Disponível em https://www.tinkercad.com/things/jZxOP7GhDm9


int count = 0,i = 0;
int ledA = 3;
int ledV = 6;

void setup()
{
  pinMode(ledA, OUTPUT);
  pinMode(ledV, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  if(count % 2 == 0){
    analogWrite(ledA,i);
    analogWrite(ledV,254 - i);
    tone(9, 665, 50);
    i++;
    if(i == 255){
      reset();
    }
  }
  else if(count % 2 == 1){
    analogWrite(ledV,i);
    analogWrite(ledA, 254 - i);
    tone(9, 332, 50);
    i++;
    if(i == 255) {
      reset();
    }
  }
  delay(2);
}
  void reset(){
      count ++;
      i = 0;
    }
