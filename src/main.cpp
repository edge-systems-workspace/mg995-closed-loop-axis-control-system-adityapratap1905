#include <Arduino.h>
#include <Servo.h>
Servo myServo;
int trigPin=9;
int echoPin=10;


void setup() {
    // write your initialization code heregit oush
    pinMode(trigPin,OUTPUT);
    pinMode(echoPin,INPUT);
    Serial.begin(9600);
    myServo.attach(300);

}


