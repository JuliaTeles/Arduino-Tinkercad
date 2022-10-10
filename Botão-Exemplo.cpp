// C++ code
//
// Disponível em https://www.tinkercad.com/things/jFZkulBvtvq

int led = 10;
int botao = 2;


int status = 0;

void mudar(){
  if(status == 1) {
  	status = 0;
  } else {
  	status = 1;
  }
}

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
  attachInterrupt(0,mudar,RISING);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(status);
  if(status == 1) {
    digitalWrite(led, LOW);
    delay(300);
    digitalWrite(led, HIGH);
    delay(300);
    
  } else {
  	digitalWrite(led, LOW);
    return;
  }
  
}
