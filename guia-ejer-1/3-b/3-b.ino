#define ledr 2
#define leda 3
#define ledv 4
int pote = A0;
int boton = 7;
int stateBoton;
int poteVal;
int ledV;
int ledA;
int ledR;

void setup()
{
  pinMode(ledr, OUTPUT);
  pinMode(leda, OUTPUT);
  pinMode(ledv, OUTPUT);
  pinMode(pote, INPUT);
  pinMode(boton, INPUT);
}

void loop()
{
  stateBoton = digitalRead(boton);
  
  if(stateBoton == HIGH){
  	poteVal = analogRead(pote);
    
    ledV = map(poteVal,0,1023,0,255);
    ledA = map(poteVal,0,1023,0,255);
    ledR = map(poteVal,0,1023,0,255);
  	
    analogWrite(ledr, ledR);
    analogWrite(ledv, ledv);
    analogWrite(leda, ledA);
  }
  
  else{
  	analogWrite(ledr, 0);
    analogWrite(leda, 0);
    analogWrite(ledv, 0);
  }
  
}