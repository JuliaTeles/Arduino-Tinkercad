#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DTHPIN, DHTTYPE)

float umidade;
float temperatura;

void setup(){
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  umidade = dht.readHumidity();
  temperatura = dht.readTemperature();

  Serial.print("Temperatura em Celsius: ");
  Serial.println(temperatura);
  Serial.println("_____________");
  Serial.print("Umidade relativa: ");
  Serial.println(umidade);
