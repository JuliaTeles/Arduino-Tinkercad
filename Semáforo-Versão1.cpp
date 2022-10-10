// C++ code
//
// Disponível em https://www.tinkercad.com/things/2IDNw0fhyBg

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  group2();
  group1();
}

void group1()
{
  acenderLed(2);
  acenderLed(3);
  acenderLed(4);
}

void group2(){
	acenderLed(5);
  acenderLed(6);
  acenderLed(7);
}

void acenderLed(int led){
  //VERDE
  if(led == 5 || led == 2){
    if(led == 5){
      digitalWrite(4,HIGH);}
      else if(led == 2){
      digitalWrite(7,HIGH);}

    digitalWrite(led,HIGH);
  delay(7000);
  digitalWrite(led,LOW);
  }
  //AMARELO
  else if(led == 6 || led == 3){
  digitalWrite(led,HIGH);
  delay(3000);
  digitalWrite(led,LOW);
  }
  //VERMELHO
  else if(led == 7 || led == 4){
  if(led == 7)
  { digitalWrite(4,LOW);
    digitalWrite(2,HIGH);
  }
    else if(led == 4){
      digitalWrite(7,LOW);
      digitalWrite(5,HIGH);}
    digitalWrite(led,HIGH);
    delay(10000);
    digitalWrite(led,LOW);
  }
}
