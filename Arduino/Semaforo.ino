#define ESTADO_VERMELHO 0
#define ESTADO_AMARELO 1
#define ESTADO_VERDE 2

int v = LOW;
 int botao = 10;
 int estado=ESTADO_VERMELHO;

int vermelho=7;
int amarelo=6;
int verde=5;


void setup() {
  
  Serial.begin(9600);
  pinMode (vermelho, OUTPUT);
  pinMode (amarelo, OUTPUT);
  pinMode (verde, OUTPUT);
  pinMode (botao, INPUT);
}

void loop(){

  v = digitalRead(botao);
  Serial.println(v);
  if ( (v == HIGH) && (ESTADO_VERMELHO == estado) ) {
    digitalWrite(vermelho, LOW);
       digitalWrite(amarelo, LOW);
      digitalWrite(verde, HIGH);
      estado = ESTADO_VERDE;
    }
     if ( ( v==LOW) && (ESTADO_VERDE == estado ) ) {
        digitalWrite(vermelho, LOW);
       digitalWrite(amarelo, HIGH);
      digitalWrite(verde, LOW);
      delay(3000);
      digitalWrite(vermelho, HIGH);
       digitalWrite(amarelo, LOW);
      digitalWrite(verde, LOW);
       estado = ESTADO_VERMELHO;
     }
       
 }
