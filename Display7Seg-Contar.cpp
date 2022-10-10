// C++ code
//
// Disponível em https://www.tinkercad.com/things/c1gHPdMGKx3

int a = 2; 
int b = 3; 
int c = 4; 
int d = 5; 
int e = 8; 
int f = 6; 
int g = 7; 

void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop()
{
  zero();
  um();
  dois();
  tres();
  quatro();
  cinco();
  seis();
  sete();
  oito();
  nove();
  
}

void zero(){
  digitalWrite(g, LOW);
  
  digitalWrite(a, HIGH); 
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH); 
  digitalWrite(f, HIGH);
  delay(1000); 
  
}

void um(){

  digitalWrite(a, LOW); 
  digitalWrite(d, LOW);
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW);
  digitalWrite(g, LOW); 
  
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH);
  delay(1000); 
  
}

void dois(){
  
  digitalWrite(c, LOW);
  digitalWrite(f, LOW);
  
  digitalWrite(a, HIGH); 
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH); 
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH); 
  delay(1000);
  
}

void tres(){
  
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  
  digitalWrite(a, HIGH); 
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH); 
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH); 
  delay(1000);
  
}

void quatro(){
  
  digitalWrite(a, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  
   
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(f, HIGH); 
  delay(1000);
  
}

void cinco(){
  
  digitalWrite(b, LOW);
  digitalWrite(e, LOW);
  
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  delay(1000);
  
}

void seis(){
  
  digitalWrite(b, LOW);
  
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH); 
  digitalWrite(c, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH); 
  delay(1000);

}

void sete(){
  
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); 

  delay(1000);

}

void oito(){
  
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);

}

void nove(){
  digitalWrite(e, LOW);
  
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);

}              
