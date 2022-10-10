// C++ code
//
// Nome: Júlia Téles Cruz	RA:200558	3ºINFD
// Disponível em https://www.tinkercad.com/things/14GRQ21zxtk

int led1 = 2;
int led2 = 5;
int led3 = 3;
int led4 = 4;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.read()|| 'A' &&  Serial.read() || 'B' && Serial.read()|| 'C' && Serial.read()|| 'D')
  {
    
  digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led1,LOW);
  delay(1000);
  
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led2,LOW);
  delay(1000);
  
  digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led3,LOW);
  delay(1000);
  
  digitalWrite(led4,HIGH);
  delay(1000);
  digitalWrite(led4,LOW);
  delay(1000);
    
  } 
  
  
  while(Serial.read()== 'A')
  {
    
  digitalWrite(led4,HIGH);
  delay(1000);
  digitalWrite(led4,LOW);
  delay(1000);
  
  digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led3,LOW);
  delay(1000);
  
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led2,LOW);
  delay(1000);
  
  digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led1,LOW);
  delay(1000);
    
  }
  while (Serial.read()== 'B')
  {
   
  digitalWrite(led4,LOW);
  delay(1000);
  digitalWrite(led3,LOW);
  delay(1000);
  digitalWrite(led2,LOW);
  delay(1000);
  digitalWrite(led1,LOW);
  delay(1000);
    
  }
  while(Serial.read()== 'C')
  {
   
  digitalWrite(led4,HIGH);
  delay(1000);
  digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led1,HIGH);
  delay(1000);
    
  }
  while(Serial.read()== 'D')
  {
   
  digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led1,LOW);
  delay(1000);
  
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led2,LOW);
  delay(1000);
  
  digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led3,LOW);
  delay(1000);
  
  digitalWrite(led4,HIGH);
  delay(1000);
  digitalWrite(led4,LOW);
  delay(1000);
    
  }
  
}
