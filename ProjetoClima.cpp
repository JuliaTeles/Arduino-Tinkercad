#include <LiquidCrystal.h>
#include <Servo.h>

// VICTOR HUGO BETONI 200154 3ºINFD
// JULIA TELES CRUZ 200558 3ºINFD

// PLANTA - BABOSA
// TEMPERATURA = ENTRE 13 E 27
// LUMINOSIDADE = ACIMA DE 300
// UMIDADE = ACIMA DE 40

int LUMINOSIDADE_MINIMA = 300;
int UMIDADE_MINIMA = 40;
int TEMPERATURA_MINIMA = 13;
int TEMPERATURA_MAXIMA = 27;

const int rs = 13, en = 5, d4 = 4, d5 = 3, d6 = 2, d7 = 8;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
Servo s;

void setup() {
  pinMode(A0, INPUT);
  pinMode(A2, INPUT);
  
  pinMode(6, OUTPUT);
  
  lcd.clear();
  lcd.begin(16, 2);
  s.attach(12);
  Serial.begin(9600);
  s.write(0);
}

void loop() {
  
  float valor = analogRead(A0);
  float tensao = (valor/1024)*5;
  float temperatura = (tensao-0.5)/0.01;
  
  int umidade = analogRead(A2);
  int luminosidade = analogRead(A1);
  
  Serial.println(luminosidade);
  
  // luminosidade
  if(luminosidade < LUMINOSIDADE_MINIMA) {
  	digitalWrite(6, HIGH);
  } else {
  	digitalWrite(6, LOW);
  }
  
  // umidade
  if(umidade < UMIDADE_MINIMA) {
  	s.write(180);
  } else {
  	s.write(0);
  }
  
  // temperatura
  if(temperatura < TEMPERATURA_MINIMA) {
  	lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Temperatura BAIXA:");
  } else if(temperatura > TEMPERATURA_MAXIMA) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Temperatura ALTA:");
  } else {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Temperatura OK:");
  }
  lcd.setCursor(0,1);
  lcd.println(temperatura);
  lcd.println("C");
 
  delay(500);
}  
