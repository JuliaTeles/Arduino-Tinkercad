// C++ code
//
// Júlia Téles Cruz   RA:200558   3ºINFD
// Disponível em https://www.tinkercad.com/things/jN38YXgrHV4

//conexão dos leds
int ledAmarelo = 2;
int ledVermelho = 3;
int ledAzul = 4;

//numero aleatorio
int numero; 

void setup()
{
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
    numero = random(2,5); 
    delay(1000);
    Serial.print("O numero gerado foi: ");
    Serial.println(numero);
    if (numero == 2){
        digitalWrite(ledAmarelo, HIGH);
        digitalWrite(ledVermelho, LOW);
        digitalWrite(ledAzul, LOW);
        Serial.println("Led Amarelo piscando");
        delay(2000);

    
    } else if (numero == 3){
      digitalWrite(ledAmarelo, LOW);
        digitalWrite(ledVermelho, HIGH);
        digitalWrite(ledAzul, LOW);
        Serial.println("Led Vermelho piscando");
        delay(2000);
    
    } else if (numero == 4){
      digitalWrite(ledAmarelo, LOW);
        digitalWrite(ledVermelho, LOW);
        digitalWrite(ledAzul, HIGH);
        Serial.println("Led Azul piscando");
        delay(2000);
    
    } else{
      Serial.println("Porta invalida!");
        delay(2000);
    }
  
}
