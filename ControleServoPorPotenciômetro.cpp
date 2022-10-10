// C++ code
//
// Disponível em https://www.tinkercad.com/things/iTWS4rtgGJ6

#include <Servo.h>

Servo mm;
void setup()
{
  mm.attach(2);
}

void loop()
{
  if(analogRead(A1)) {
    
    int val = analogRead(A1);
    int mapped = map(val, 0, 1023, 1, 180);
    mm.write(mapped);
    delay(20);
  }              
}
