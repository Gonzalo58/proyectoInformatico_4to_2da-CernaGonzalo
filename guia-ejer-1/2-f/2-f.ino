#define led 4
int pote = A2;
int poteVal;
int time;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pote, INPUT);
  Serial.begin(9600);
}

void loop()
{
  poteVal = analogRead(pote);
  //mapeo el valor
  time = map(poteVal,0,1013,0,1000) /2.0;
  //encendido del led y funcionamiento de la consigna
  analogWrite(led, 255);
  delay(time);
  analogWrite(led, 0);
  delay(time);
  
}
