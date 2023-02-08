#include <Servo.h>

// header for controller servo

Servo servo; //keeping name of servo SERVO itself

int sensorvalue =0;
int sensorvalue1 =0;
int sensorvalue2 =0;
int sensorvalue3 =0;
int sensorvalue4 =0;

void setup()

{

            pinMode(A0,INPUT);// voltage divider value input
			pinMode(A1,INPUT);
  			pinMode(A2,INPUT);
  			pinMode(A3,INPUT);
  			pinMode(A4,INPUT);
  
            pinMode(3,OUTPUT);// PWM output to servo
			pinMode(4,OUTPUT);
  			pinMode(5,OUTPUT);
  			pinMode(6,OUTPUT);
  			pinMode(7,OUTPUT);
  
            servo.attach(3);// telling where signal pin of servo attached(must be a PWM pin)
			servo.attach(4);
  			servo.attach(5);
  			servo.attach(6);
 			servo.attach(7);
}

void loop()

{

            sensorvalue = analogRead(A0); //read analog value from sensor
			sensorvalue1 = analogRead(A1);
  			sensorvalue2 = analogRead(A2);
  			sensorvalue3 = analogRead(A3);
  			sensorvalue4 = analogRead(A4);
  
            servo.write((sensorvalue-250)/2); //to avoid initial positioning of servo we need to neutralize the default voltage provided by voltage divider( setting servo position based on ADC result)
			servo.write((sensorvalue1-250)/2);
  			servo.write((sensorvalue2-250)/2);
  			servo.write((sensorvalue3-250)/2);
  			servo.write((sensorvalue4-250)/2);
}
