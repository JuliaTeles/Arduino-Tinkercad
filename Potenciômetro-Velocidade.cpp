// C++ code
// x = map(x, 0, 1023, 0, 274);
//
// Disponível em https://www.tinkercad.com/things/k3Yuccm6ztm

int y;
int x = 2;
int ledVermelho = 2;
int ledAmarelo = 3;
int ledVerde = 4;
  
void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  if(x == 4){
  	x = 2;}
  else{
  	x++;}
  
  y = analogRead(A1); 
    
  digitalWrite(x, HIGH);
  delay(y);
  digitalWrite(x, LOW);
  delay(y);
}
