#include <Servo.h>

// inicialicacion de los servos

Servo servo; 

int sensorvalue =0;
int sensorvalue1 =0;
int sensorvalue2 =0;
int sensorvalue3 =0;
int sensorvalue4 =0;

void setup()

{

            pinMode(A0,INPUT);// sensores como inputs
			pinMode(A1,INPUT);
  			pinMode(A2,INPUT);
  			pinMode(A3,INPUT);
  			pinMode(A4,INPUT);
  
            pinMode(3,OUTPUT);// servos en cada pin
			pinMode(4,OUTPUT);
  			pinMode(5,OUTPUT);
  			pinMode(6,OUTPUT);
  			pinMode(7,OUTPUT);
  
            servo.attach(3);// union de servo a cada sensor
			servo.attach(4);
  			servo.attach(5);
  			servo.attach(6);
 			servo.attach(7);
}

void loop()

{

            sensorvalue = analogRead(A0); //read analog como valor de cada sensor
			sensorvalue1 = analogRead(A1);
  			sensorvalue2 = analogRead(A2);
  			sensorvalue3 = analogRead(A3);
  			sensorvalue4 = analogRead(A4);
  
            servo.write((sensorvalue-250)/2); //determinar la posicion incial de cada servo se divide entre 2 para que quede en el lugar exacto de arranque
			servo.write((sensorvalue1-250)/2);
  			servo.write((sensorvalue2-250)/2);
  			servo.write((sensorvalue3-250)/2);
  			servo.write((sensorvalue4-250)/2);
}
