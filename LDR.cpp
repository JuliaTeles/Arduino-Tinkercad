// C++ code
//
// Disponível em https://www.tinkercad.com/things/ggFZfa8yg1J

int ldr = A0;
int led = 3;
int entrada = 0;

void setup()
{
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  entrada = analogRead(ldr);
  analogWrite(led,map(entrada, 0 , 1023, 0, 254));
  Serial.print("Leitura do sensor: ");
  Serial.println(entrada);
  delay(1000);
}
