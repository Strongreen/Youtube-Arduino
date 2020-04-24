#include <Servo.h>

Servo servo;

int pinServo = 2;
int sensorLum = A0;

void setup() {
 pinMode(sensorLum,INPUT);
 Serial.begin(9600);
 servo.attach(pinServo);
 servo.write(0);
}

void loop() {
  Serial.println(analogRead(sensorLum));
  if(analogRead(sensorLum) > 280){  //tela branca 
    // if(analogRead(sensorLum) > 690){   tela preta
    servo.write(20);
    delay(150);
    }
    else{
      servo.write(0);
      delay(50);     
      }

}
