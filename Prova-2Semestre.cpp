// C++ code
//
// Disponível em https://www.tinkercad.com/things/ltMZoLpocoB

int a = 2; 
int b = 3; 
int c = 4; 
int d = 5; 
int e = 8; 
int f = 6; 
int g = 7; 
int numero;

void setup()
{
  Serial.begin(9600);
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
  if(Serial.available()>0)
  {
  
  numero = int(Serial.read());
  if(numero == 0){
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
    limpa();
    
  }else if(numero == '1'){
  	um();
  	dois();
  	tres();
  	quatro();
  	cinco();
  	seis();
  	sete();
  	oito();
  	nove();
    limpa();
  }else if(numero == '2'){
  	dois();
  	tres();
  	quatro();
  	cinco();
  	seis();
  	sete();
  	oito();
  	nove();
    limpa();
  }else if(numero == '3'){
  	tres();
  	quatro();
  	cinco();
  	seis();
  	sete();
  	oito();
  	nove();
    limpa();
  }else if(numero == '4'){
  	quatro();
  	cinco();
  	seis();
  	sete();
  	oito();
  	nove();
    limpa();
  }else if(numero == '5'){
  	cinco();
  	seis();
  	sete();
  	oito();
  	nove();
    limpa();
  }else if(numero == '6'){
  	seis();
  	sete();
  	oito();
  	nove();
    limpa();
  }else if(numero == '7'){
  	sete();
  	oito();
  	nove();
    limpa();
  }else if(numero == '8'){
  	oito();
  	nove();
    limpa();
  }else if(numero == '9'){
  	nove();
    limpa();
  }
  }
  
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


void limpa(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW); 
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
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
