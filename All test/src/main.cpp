#include <Arduino.h>
#define onboard 13

int apin = A0;
int greenPin = 5;
int redPin = 6;
void setup()
{
  pinMode(apin, INPUT);
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
}

void loop()
{
  int photoval = analogRead(apin);
  if(photoval>100){
    digitalWrite(greenPin,HIGH);
    digitalWrite(redPin,LOW);
  }else{
    digitalWrite(greenPin,LOW);
    digitalWrite(redPin,HIGH);
  }
  Serial.println(photoval);
}