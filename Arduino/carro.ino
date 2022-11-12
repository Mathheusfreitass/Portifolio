//motor esquerdo
int horario_E = 8;
int a_horario_E = 10;
int vel_E = 9;

// motor direito
int horario_D = 4;
int a_horario_D = 5;
int vel_D = 3;

// ldr's
int ldrF = A0;
int ldrE = A1;
int ldrD = A2;

void pararE(){

  digitalWrite(horario_E, LOW);
  digitalWrite(a_horario_E, LOW);
}


void frente(int pwm){
  analogWrite(vel_E, pwm);
  analogWrite(vel_D, pwm);
  digitalWrite(horario_E, LOW);
  digitalWrite(a_horario_E, HIGH);
  digitalWrite(horario_D, LOW);
  digitalWrite(a_horario_D, HIGH);
}

void esquerda(int pwm){
  analogWrite(vel_E, 0);
  analogWrite(vel_D, pwm);
  digitalWrite(horario_E, LOW);
  digitalWrite(a_horario_E, HIGH);
  digitalWrite(horario_D, LOW);
  digitalWrite(a_horario_D, HIGH);
}

void direita(int pwm){
  analogWrite(vel_E, pwm);
  analogWrite(vel_D, 0);
  digitalWrite(horario_E, LOW);
  digitalWrite(a_horario_E, HIGH);
  digitalWrite(horario_D, LOW);
  digitalWrite(a_horario_D, HIGH);
}


void setup() {
  pinMode(horario_E, OUTPUT);
  pinMode(a_horario_E, OUTPUT);
  pinMode(horario_D, OUTPUT);
  pinMode(a_horario_D, OUTPUT);

  pinMode (ldrE, INPUT);
  pinMode (ldrD, INPUT);
  pinMode (ldrF, INPUT);
}

void loop() {
  int f = analogRead(ldrF);
  int e = analogRead(ldrE);
  int d = analogRead(ldrD);

  if(f>e && f>d){
    frente(100);
  }
  if(e>d && e>f){
    esquerda(100);
  }
  if(d>e && d>f){
    direita(100);
  }
  
}
