// C++ code
//
// Nome: Júlia Téles Cruz  RA:200558
Servo mm;
int pir = 2; 

void setup()
{
  mm.attach(3);
  mm.write(90);
}

void loop()
{
  byte movimento = digitalRead(pir);
  if(movimento == HIGH){
  	mm.write(0);
    delay(2000);
  }
  else{
    mm.write(90);
  }
  delay(100);
  
}
