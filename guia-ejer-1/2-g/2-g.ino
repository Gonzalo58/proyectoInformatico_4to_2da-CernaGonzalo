#define buzzer 7
int pote = A0;
int poteVal;
int sonidoVal;

void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(pote, INPUT);
}

void loop()
{
  poteVal = analogRead(pote);
  sonidoVal = map(poteVal,0,1023,0,100);
  tone(buzzer,sonidoVal);
}