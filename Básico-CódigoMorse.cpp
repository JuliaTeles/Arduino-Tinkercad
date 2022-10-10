// C++ code
//
// Nome: Júlia Téles Cruz	RA:200558	3ºINFD
// Disponível em https://www.tinkercad.com/things/0IMI0HH8sqd

String letra;
int led = 13;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop()
{
  if(Serial.available()>0)
  {
    letra = char(Serial.read());
    letra.toUpperCase();
    	if(letra == "A")
        {
          letraA();
        }
        if(letra == "B")
        {
          letraB();
        }
    	if(letra == "C")
        {
          letraC();
        }
    	if(letra == "D")
        {
          letraD();
        }
    	if(letra == "E")
        {
          letraE();
        }
    	if(letra == "F")
        {
          letraF();
        }
        if(letra == "G")
        {
          letraG();
        }
    	if(letra == "H")
        {
          letraH();
        }
    	if(letra == "I")
        {
          letraI();
        }
    	if(letra == "J")
        {
          letraJ();
        }
    	if(letra == "K")
        {
          letraK();
        }
    	if(letra == "L")
        {
          letraL();
        }
    	if(letra == "M")
        {
          letraM();
        }
    	if(letra == "N")
        {
          letraN();
        }
    	if(letra == "O")
        {
          letraO();
        }
    	if(letra == "P")
        {
          letraP();
        }
    	if(letra == "Q")
        {
          letraQ();
        }
    	if(letra == "R")
        {
          letraR();
        }
    	if(letra == "S")
        {
          letraS();
        }
    	if(letra == "T")
        {
          letraT();
        }
    	if(letra == "U")
        {
          letraU();
        }
    	if(letra == "V")
        {
          letraV();
        }
    	if(letra == "W")
        {
          letraW();
        }
    	if(letra == "X")
        {
          letraX();
        }
    	if(letra == "Y")
        {
          letraY();
        }
    	if(letra == "Z")
        {
          letraZ();
        }
    	if(letra == "1")
        {
          num1();
        }
    	if(letra == "2")
        {
          num2();
        }
    	if(letra == "3")
        {
          num3();
        }
    	if(letra == "4")
        {
          num4();
        }
    	if(letra == "5")
        {
          num5();
        }
    	if(letra == "6")
        {
          num6();
        }
    	if(letra == "7")
        {
          num7();
        }
    	if(letra == "8")
        {
          num8();
        }
    	if(letra == "9")
        {
          num9();
        }
    	if(letra == "0")
        {
          num0();
        }
    
    
  }
}

void ponto()
{
  //Ponto
  digitalWrite(13, HIGH);
  	delay(300);
  digitalWrite(13, LOW);
  	delay(500);
}

void traco()
{
  //Traço
  digitalWrite(13, HIGH);
  	delay(900);
  digitalWrite(13, LOW);
  	delay(500);
  
}


void letraA()
{
  ponto();
  traco();
  
}

void letraB()
{
  traco();
  ponto();
  ponto();
  ponto();
}

void letraC()
{
  traco();
  ponto();
  traco();
  ponto();
}

void letraD()
{
  traco();
  ponto();
  ponto();
}

void letraE()
{
  ponto();
}

void letraF()
{
  ponto();
  ponto();
  traco();
  ponto();
}

void letraG()
{
  traco();
  traco();
  ponto();
}

void letraH()
{
  ponto();
  ponto();
  ponto();
  ponto();
}

void letraI()
{
  ponto();
  ponto();
}

void letraJ()
{
  ponto();
  traco();
  traco();
  traco();
}

void letraK()
{
  traco();
  ponto();
  traco();
}

void letraL()
{
  ponto();
  traco();
  ponto();
  ponto();
}

void letraM()
{
  traco();
  traco();
}

void letraN()
{
  traco();
  ponto();
}

void letraO()
{
  traco();
  traco();
  traco();
}

void letraP()
{
  ponto();
  traco();
  traco();
  ponto();
}


void letraQ()
{
  traco();
  traco();
  ponto();
  traco();
}

void letraR()
{
  ponto();
  traco();
  ponto();
}

void letraS()
{
  ponto();
  ponto();
  ponto();
}

void letraT()
{
  traco();
}

void letraU()
{
  ponto();
  ponto();
  traco();
}

void letraV()
{
  ponto();
  ponto();
  ponto();
  traco();
}

void letraW()
{
  ponto();
  traco();
  traco();
}

void letraX()
{
  traco();
  ponto();
  ponto();
  traco();
}

void letraY()
{
  traco();
  ponto();
  traco();
  traco();
}

void letraZ()
{
  traco();
  traco();
  ponto();
  ponto();
}

void num1()
{
  ponto();
  traco();
  traco();
  traco();
  traco();
}

void num2()
{
  ponto();
  ponto();
  traco();
  traco();
  traco();
}

void num3()
{
  ponto();
  ponto();
  ponto();
  traco();
  traco();
}

void num4()
{
  ponto();
  ponto();
  ponto();
  ponto();
  traco();
}

void num5()
{
  ponto();
  ponto();
  ponto();
  ponto();
  ponto();
}

void num6()
{
  traco();
  ponto();
  ponto();
  ponto();
  ponto();
}

void num7()
{
  traco();
  traco();
  ponto();
  ponto();
  ponto();
}

void num8()
{
  traco();
  traco();
  traco();
  ponto();
  ponto();
}

void num9()
{
  traco();
  traco();
  traco();
  traco();
  ponto();
}

void num0()
{
  traco();
  traco();
  traco();
  traco();
  traco();
}
