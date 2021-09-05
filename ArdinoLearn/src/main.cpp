#include <Arduino.h>
String color;
String msg = "Which colour you wanna glow?";
int wait1 = 500;
int redPin = 4;
int bluePin = 6;
int greenPin = 12;  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
}

void loop() {
  Serial.println(msg);
  // put your main code here, to run repeatedly:
  while (Serial.available() == 0) {

  }
  color = Serial.readString();
  if (color == "red") {
    digitalWrite(redPin,HIGH);
    delay(wait1);
    digitalWrite(redPin,LOW);
    }
  else if (color == "blue") {
    digitalWrite(bluePin,HIGH);
    delay(wait1);
    digitalWrite(bluePin,LOW);
  }
  else if (color == "green")
  {
    digitalWrite(greenPin,HIGH);
    delay(wait1);
    digitalWrite(greenPin,LOW);
  }
  else{
    digitalWrite(redPin,HIGH); 
    digitalWrite(bluePin,HIGH);
    digitalWrite(greenPin,HIGH);
    delay(wait1);
    digitalWrite(redPin,LOW);
    digitalWrite(bluePin,LOW);
    digitalWrite(greenPin,LOW);
  }
  
}