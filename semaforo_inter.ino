// Definimos los pines que utilizaremos para controlar los semáforos

// PINES DIGITALES (Solo 0 y 1)

int semaforo1_verde = 2;
int semaforo1_amarillo = 3;
int semaforo1_rojo = 4;

int semaforo2_verde = 5;
int semaforo2_amarillo = 6;
int semaforo2_rojo = 7;

int semaforo3_verde = 8;
int semaforo3_amarillo = 9;
int semaforo3_rojo = 10;

int semaforo4_verde = 11;
int semaforo4_amarillo = 12;
int semaforo4_rojo = 13;

// PINES ANALOGICOS (Mas valores)

int semaforo_peaton_1 = A0;
int semaforo_peaton_2 = A1;
int semaforo_peaton_3 = A2;
int semaforo_peaton_4 = A3;

void setup() {
  
  pinMode(semaforo1_verde, OUTPUT);
  pinMode(semaforo1_amarillo, OUTPUT);
  pinMode(semaforo1_rojo, OUTPUT);
  
  pinMode(semaforo2_verde, OUTPUT);
  pinMode(semaforo2_amarillo, OUTPUT);
  pinMode(semaforo2_rojo, OUTPUT);
  
  pinMode(semaforo3_verde, OUTPUT);
  pinMode(semaforo3_amarillo, OUTPUT);
  pinMode(semaforo3_rojo, OUTPUT);
  
  pinMode(semaforo4_verde, OUTPUT);
  pinMode(semaforo4_amarillo, OUTPUT);
  pinMode(semaforo4_rojo, OUTPUT);
  
  pinMode(semaforo_peaton_1, OUTPUT);
  pinMode(semaforo_peaton_2, OUTPUT);
  pinMode(semaforo_peaton_3, OUTPUT);
  pinMode(semaforo_peaton_4, OUTPUT);
}

void loop() {

  // SEM 1 VERDE

  digitalWrite(semaforo1_verde, HIGH);
  digitalWrite(semaforo1_amarillo, LOW);
  digitalWrite(semaforo1_rojo, LOW);
  
  digitalWrite(semaforo2_verde, LOW);
  digitalWrite(semaforo2_amarillo, LOW);
  digitalWrite(semaforo2_rojo, HIGH);
  
  digitalWrite(semaforo3_verde, LOW);
  digitalWrite(semaforo3_amarillo, LOW);
  digitalWrite(semaforo3_rojo, HIGH);
  
  digitalWrite(semaforo4_verde, LOW);
  digitalWrite(semaforo4_amarillo, LOW);
  digitalWrite(semaforo4_rojo, HIGH);
  
   delay(7000);
  
  // SEM 1 AMA
  
  digitalWrite(semaforo1_verde, LOW);
  digitalWrite(semaforo1_amarillo, HIGH);
  digitalWrite(semaforo1_rojo, LOW);
  
   delay(2000);
  
  // SEM 1 ROJO
  
  digitalWrite(semaforo1_verde, LOW);
  digitalWrite(semaforo1_amarillo, LOW);
  digitalWrite(semaforo1_rojo, HIGH);
  
  // PEAT PASEN
  
  digitalWrite(semaforo_peaton_1, HIGH);
  digitalWrite(semaforo_peaton_2, HIGH);
  digitalWrite(semaforo_peaton_3, HIGH);
  digitalWrite(semaforo_peaton_4, HIGH);
  
  delay(10000);
  
  //PEAT NO PASAN
  
  digitalWrite(semaforo_peaton_1, LOW);
  digitalWrite(semaforo_peaton_2, LOW);
  digitalWrite(semaforo_peaton_3, LOW);
  digitalWrite(semaforo_peaton_4, LOW);

  delay(1000);
  
  //TODO ROJO
  
  //SEM 2 VERDE
  
  digitalWrite(semaforo1_verde, LOW);
  digitalWrite(semaforo1_amarillo, LOW);
  digitalWrite(semaforo1_rojo, HIGH);
  
  digitalWrite(semaforo2_verde, HIGH);
  digitalWrite(semaforo2_amarillo, LOW);
  digitalWrite(semaforo2_rojo, LOW);
  
  digitalWrite(semaforo3_verde, LOW);
  digitalWrite(semaforo3_amarillo, LOW);
  digitalWrite(semaforo3_rojo, HIGH);
  
  digitalWrite(semaforo4_verde, LOW);
  digitalWrite(semaforo4_amarillo, LOW);
  digitalWrite(semaforo4_rojo, HIGH);
  
  delay(7000);
  
  //SEM 2 AMA

  digitalWrite(semaforo2_verde, LOW);
  digitalWrite(semaforo2_amarillo, HIGH);
  digitalWrite(semaforo2_rojo, LOW);

  delay(2000);
  
  //SEM 2 ROJO
  
  digitalWrite(semaforo2_verde, LOW);
  digitalWrite(semaforo2_amarillo, LOW);
  digitalWrite(semaforo2_rojo, HIGH);
  
  // PEAT PASEN
  
  digitalWrite(semaforo_peaton_1, HIGH);
  digitalWrite(semaforo_peaton_2, HIGH);
  digitalWrite(semaforo_peaton_3, HIGH);
  digitalWrite(semaforo_peaton_4, HIGH);
  
  delay(10000);
  
  //PEAT NO PASAN
  
  digitalWrite(semaforo_peaton_1, LOW);
  digitalWrite(semaforo_peaton_2, LOW);
  digitalWrite(semaforo_peaton_3, LOW);
  digitalWrite(semaforo_peaton_4, LOW);
  
  delay(1000);

  //TODO ROJO

  //SEM 3 VERDE
  
  digitalWrite(semaforo1_verde, LOW);
  digitalWrite(semaforo1_amarillo, LOW);
  digitalWrite(semaforo1_rojo, HIGH);
  
  digitalWrite(semaforo2_verde, LOW);
  digitalWrite(semaforo2_amarillo, LOW);
  digitalWrite(semaforo2_rojo, HIGH);

  digitalWrite(semaforo3_verde, HIGH);
  digitalWrite(semaforo3_amarillo, LOW);
  digitalWrite(semaforo3_rojo, LOW);
  
  digitalWrite(semaforo4_verde, LOW);
  digitalWrite(semaforo4_amarillo, LOW);
  digitalWrite(semaforo4_rojo, HIGH);
  
   delay(7000);
  
   //SEM 3 AMA
  
  digitalWrite(semaforo3_verde, LOW);
  digitalWrite(semaforo3_amarillo, HIGH);
  digitalWrite(semaforo3_rojo, LOW);
  
  delay(2000);
  
   // SEM 3 ROJO
  
  digitalWrite(semaforo3_verde, LOW);
  digitalWrite(semaforo3_amarillo, LOW);
  digitalWrite(semaforo3_rojo, HIGH);
  
  // PEAT PASEN
  
  digitalWrite(semaforo_peaton_1, HIGH);
  digitalWrite(semaforo_peaton_2, HIGH);
  digitalWrite(semaforo_peaton_3, HIGH);
  digitalWrite(semaforo_peaton_4, HIGH);
  
  delay(10000);
  
  //PEAT NO PASAN
  
  digitalWrite(semaforo_peaton_1, LOW);
  digitalWrite(semaforo_peaton_2, LOW);
  digitalWrite(semaforo_peaton_3, LOW);
  digitalWrite(semaforo_peaton_4, LOW);
  
  delay(1000);

  //TODO ROJO

  //SEM 4 VERDE
  
  digitalWrite(semaforo1_verde, LOW);
  digitalWrite(semaforo1_amarillo, LOW);
  digitalWrite(semaforo1_rojo, HIGH);
  
  digitalWrite(semaforo2_verde, LOW);
  digitalWrite(semaforo2_amarillo, LOW);
  digitalWrite(semaforo2_rojo, HIGH);
  
  digitalWrite(semaforo3_verde, LOW);
  digitalWrite(semaforo3_amarillo, LOW);
  digitalWrite(semaforo3_rojo, HIGH);
  
  digitalWrite(semaforo4_verde, HIGH);
  digitalWrite(semaforo4_amarillo, LOW);
  digitalWrite(semaforo4_rojo, LOW);

  delay(7000);
  
  //SEM 4 AMA

  digitalWrite(semaforo4_verde, LOW);
  digitalWrite(semaforo4_amarillo, HIGH);
  digitalWrite(semaforo4_rojo, LOW);
  
  delay(2000);

  // SEM 4 ROJO

  digitalWrite(semaforo4_verde, LOW);
  digitalWrite(semaforo4_amarillo, LOW);
  digitalWrite(semaforo4_rojo, HIGH);
  
  // PEAT PASEN
  
  digitalWrite(semaforo_peaton_1, HIGH);
  digitalWrite(semaforo_peaton_2, HIGH);
  digitalWrite(semaforo_peaton_3, HIGH);
  digitalWrite(semaforo_peaton_4, HIGH);
  
  delay(10000);
  
  //PEAT NO PASAN
  
  digitalWrite(semaforo_peaton_1, LOW);
  digitalWrite(semaforo_peaton_2, LOW);
  digitalWrite(semaforo_peaton_3, LOW);
  digitalWrite(semaforo_peaton_4, LOW);
  
  delay(1000);

  //TODO ROJO

}