// C++ code
//
// Disponível em https://www.tinkercad.com/things/911u2ErJrVp

int x;
int ledVermelho = 3;

  
void setup()
{
  Serial.begin(9600);
  pinMode(ledVermelho, OUTPUT);
}

void loop()
{
  x = analogRead(A1); 
  x = map(x, 0, 1023, 0, 274);
  
  analogWrite(ledVermelho,x);
  delay(10);
}
