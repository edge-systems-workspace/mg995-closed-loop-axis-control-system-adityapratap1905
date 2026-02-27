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


void loop() {
    // write your code here
    digitalWrite(trigPin,0); // 0 is for LOW and for OFF
    delayMicroseconds(2);
    digitalWrite(trigPin,1); // 1 is for HIGH and for ON
    delayMicroseconds(10);
    digitalWrite(trigPin,0); //  0 is for LOW and for OFF

    long duration = pulseIn(echoPin, HIGH);
    long distance = duration * 0.0343 /2;
    if(distance<=15)
    {
        myServo.write(90);
    }
    else
    {
        myServo.write(0);
    }
    Serial.print("Distance:");
    Serial.print(distance);
    Serial.println(" cm");

    delay(500);

}