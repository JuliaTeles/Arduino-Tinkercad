// C++ code
//
//Nome: Júlia Téles Cruz    RA:200558    3ºINFD
//Nome: Victor Hugo Betoni    RA:200154    3ºINFD
//
// Disponível em https://www.tinkercad.com/things/0EYqm6BJ6Gz

#include <LiquidCrystal.h>

const int rs = 13, en = 5, d4 = 4, d5 = 3, d6 = 2, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int count = 0,i = 0;
int ledA = 11;
int ledV = 12;
byte trigger=7, echo=6;
float cm, leitura, calculaDistancia;

void setup()
{
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(ledA, OUTPUT);
  pinMode(ledV, OUTPUT);
  Serial.begin(9600);
  
  lcd.clear();
  lcd.begin(16, 2);
  
  
}

void loop()
{

  cm = distancia();
  Serial.println("Distancia em cm: ");
  Serial.println(cm);
  
  if(cm<=50){
    	lcd.clear();
    	lcd.setCursor(0,0);
    	lcd.print("Distancia: ");
  		lcd.print(cm);
    	lcd.setCursor(0,1);
  		lcd.println("Sai de perto oxi");
    	digitalWrite(ledA, HIGH);
    	digitalWrite(ledV, LOW);
    	tone(9, 332, 200);
    	delay(200);
    
  		digitalWrite(ledV, HIGH);
    	digitalWrite(ledA, LOW);
        tone(9, 665, 200);
    	delay(200); 
  }
  else{
    	lcd.clear();
    	lcd.setCursor(0,0);
    	lcd.print("Distancia: ");
  		lcd.print(cm);
    	lcd.setCursor(0,1);
  		lcd.println("Longe demais");
  
  }
  
}  

float distancia(){
	digitalWrite(trigger,LOW);
  		delayMicroseconds(5);
  	digitalWrite(trigger,HIGH);
  		delayMicroseconds(10);
  	digitalWrite(trigger,LOW);
  
  leitura = pulseIn(echo,HIGH);
  
  calculaDistancia = (leitura/2)*0.0343;
  
  if(calculaDistancia>=331){
    calculaDistancia=0;
  }
  return calculaDistancia;
}

void reset(){
      count ++;
      i = 0;
}
