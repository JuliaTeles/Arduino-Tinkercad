// C++ code
//
// Disponível em https://www.tinkercad.com/things/kMWNoyHJFCG

int led = 13;
int botao = 2;
int press = 0;
int cont = 0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(botao),zera,HIGH);
}

void loop()
{
  Serial.println(cont);
  cont++;
  delay(300);
  press = digitalRead(botao);
  if(press == HIGH){
  	digitalWrite(led, HIGH);
  }
  else{
  	digitalWrite(led, LOW);
  }
}

void zera(){
  cont=0; 
}
