int VERDE = 13;
int ROJO = 4;
int AMBAR = 8;
int pulsador = 2;
void setup()
{
  pinMode(VERDE, OUTPUT); // Configuro pin como salida
  pinMode(ROJO, OUTPUT);
  pinMode(AMBAR, OUTPUT);
  pinMode(pulsador, INPUT);
}

void loop()
{ 
  if (digitalRead(pulsador)==0){
  digitalWrite(VERDE, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(VERDE, LOW);
  digitalWrite(AMBAR, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(AMBAR, LOW);
  digitalWrite(ROJO, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(ROJO, LOW);
}

  else{
  digitalWrite(VERDE, HIGH);
  delay(1000);
  digitalWrite(VERDE, LOW);
  digitalWrite(AMBAR, HIGH);
  delay(1000);
  digitalWrite(AMBAR, LOW);
  digitalWrite(ROJO, HIGH);
  delay(1000);
  digitalWrite(ROJO, LOW);
  }
}
    