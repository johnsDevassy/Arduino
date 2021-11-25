#include <Arduino.h>
#define onboard 13

int readb1;
int readb2;
int buttonPin1 = 12;
int buttonPin2 = 8;
int redPin = 9;
int oldbutton = 0;
int ledState = 0;
int bright = 0;
int buzzPin = 4;
void setup()
{
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2,INPUT);
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(buzzPin,OUTPUT);
}

void loop()
{
  readb1 = digitalRead(buttonPin1);
  readb2 = digitalRead(buttonPin2);
  Serial.println("b1:"+(String)readb1+" "+ "b2:"+ (String)readb2);
  if(readb1 == 0){
    bright += 5;
    if (bright > 255){
      bright = 255;
      digitalWrite(buzzPin,HIGH);
      delay(2000);
      digitalWrite(buzzPin,LOW);
    }
    analogWrite(redPin,bright);

  }
  else if(readb2 == 0){
    bright -= 5;
    if (bright < 0){
      bright = 0;
      digitalWrite(buzzPin,HIGH);
      delay(2000);
      digitalWrite(buzzPin,LOW);
    }
    analogWrite(redPin,bright);

  }
  delay(25);
}