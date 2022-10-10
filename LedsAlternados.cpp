// C++ code
//
// Disponível em https://www.tinkercad.com/things/hAJzAJNca0H

int ledV = 3;
int ledA = 5;

void setup()
{
  pinMode(ledV, OUTPUT);
  pinMode(ledA, OUTPUT);
}

void loop()
{
  
  int i = 0;
  int a = 0;

      for(a=0; a<55; a++){
        analogWrite(ledV,a);
        analogWrite(ledA,255-a);
        delay(20);
      }
      
      for(a=55; a>0; a--){
        analogWrite(ledA,a);
        analogWrite(ledV,255-a);
        delay(20);
     }

	}

}
