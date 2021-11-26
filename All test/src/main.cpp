#include <Arduino.h>
#include <Servo.h>
#define onboard 13

Servo myServo;
int readb1;
int readb2;
int servoPin = 10;
int servoPos = 360;

void setup()
{
  Serial.begin(9600);
  pinMode(servoPin,OUTPUT);
  myServo.attach(servoPin);
}

void loop()
{
  myServo.write(270);
}