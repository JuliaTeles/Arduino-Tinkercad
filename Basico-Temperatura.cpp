// C++ code
//
// Nome: Júlia Téles Cruz 3ºINFD
// Disponível em https://www.tinkercad.com/things/de2peBGnpbn

const int LM35 = A0;
float temperatura;

void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  float valor = analogRead(LM35);
  float tensao = ((valor/1024)*5);
  float temperatura = ((tensao-0.5)/0.01);
  Serial.println(temperatura);
  delay(1000);
}
