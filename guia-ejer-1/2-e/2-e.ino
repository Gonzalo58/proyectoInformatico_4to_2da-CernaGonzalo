#define led1r 1
#define led1a 2
#define led1v 3

int poteA = A0;
int poteValA;
int valorA;

int poteR = A1;
int poteValR;
int valorR;

int poteV = A2;
int poteValV;
int valorV;


void setup()
{
  pinMode(led1r, OUTPUT);
  pinMode(led1a, OUTPUT);
  pinMode(led1v, OUTPUT);
  pinMode(poteA, INPUT);
  pinMode(poteR, INPUT);
  pinMode(poteV, INPUT);
}

void loop()
{
  //potenciometro azul
  poteValA = analogRead(poteA);
  valorA = map(poteValA, 0, 1023, 0, 255);
  //potenciometro rojo
  poteValR = analogRead(poteR);
  valorR = map(poteValR, 0, 1023, 0, 255);
  //potenciometro verde
  poteValV = analogRead(poteV);
  valorV = map(poteValV, 0, 1023, 0, 255);
  analogWrite(led1r, valorR);
  analogWrite(led1v, valorR);
  analogWrite(led1a, valorA);

}