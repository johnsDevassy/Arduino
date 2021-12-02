#include <Arduino.h>
#include <Servo.h>
#define onboard 13

Servo myServo;
int readb1;
int readb2;
int servoPin = 10;
int servoPos = 360;
int leftpin = 5;
int bluepin = 6;
int rightpin = 7;
int whitepin = 4;

void setup()
{
  Serial.begin(9600);
  pinMode(servoPin,OUTPUT);
    pinMode(leftpin,OUTPUT);
  pinMode(bluepin,OUTPUT);
  pinMode(whitepin,OUTPUT);
  pinMode(rightpin,OUTPUT);

  myServo.attach(servoPin);
}

void loop()
{ 
  
  myServo.write(90);
  delay(5000);
  delay(250);
  myServo.write(45);
  delay(500);
  digitalWrite(rightpin,HIGH);
  delay(500);
  digitalWrite(whitepin,LOW);
  myServo.write(135);
  delay(1500);
  digitalWrite(rightpin,LOW);
  for(int j =5 ;j<255;j++){
    analogWrite(bluepin,j);
    delay(7);
  }
  for(int j =255 ;j>5;j--){
    analogWrite(bluepin,j);
    delay(6);
  }
  digitalWrite(bluepin,LOW);
  digitalWrite(leftpin,HIGH);
  delay(400);
  myServo.write(45);
  delay(300);
  digitalWrite(leftpin,LOW);
  
  myServo.write(135);
  delay(100);
  digitalWrite(rightpin,HIGH);
  delay(300);
  myServo.write(45);
  delay(100);
  digitalWrite(rightpin,LOW);
  
  
  digitalWrite(leftpin,HIGH);
  delay(300);
  myServo.write(135);
  digitalWrite(leftpin,LOW);
  delay(100);

  digitalWrite(rightpin,HIGH);
  delay(300);
  myServo.write(45);
  delay(100);
  digitalWrite(rightpin,LOW);

  digitalWrite(leftpin,HIGH);
  delay(300);
  myServo.write(135);
  digitalWrite(leftpin,LOW);
  delay(100);
  
  digitalWrite(rightpin,HIGH);
  delay(300);
  myServo.write(45);
  delay(100);
  digitalWrite(rightpin,LOW);

  digitalWrite(leftpin,HIGH);
  delay(300);
  myServo.write(135);
  digitalWrite(leftpin,LOW);
  delay(100);
  
  digitalWrite(rightpin,HIGH);
  delay(300);
  delay(100);
  digitalWrite(rightpin,LOW);

//sahadeva
  digitalWrite(whitepin,HIGH);
  delay(800);
  myServo.write(160);
  delay(200);
  digitalWrite(whitepin,LOW);
  delay(1400);
//enta edokkea
digitalWrite(whitepin,HIGH);
  delay(860);
  digitalWrite(whitepin,LOW);
  for(int j =5 ;j<105;j++){
    analogWrite(bluepin,j);
    delay(42);
  }
  //delay(4200);

  //chumma oru parade sir
  digitalWrite(bluepin,LOW);
  for(int k = 0; k<2;k++) {
    myServo.write(145);
    delay(350);
    myServo.write(175);
    delay(350);
  }
  myServo.write(160);
  delay(800);
  //hey
  digitalWrite(bluepin,HIGH);
  delay(400);
  //shot1
  myServo.write(90);
  delay(650);
  digitalWrite(bluepin,LOW);
  delay(250);

  digitalWrite(leftpin,HIGH);
  delay(100);
  myServo.write(45);
  delay(200);
  digitalWrite(leftpin,LOW);
  delay(200);


  digitalWrite(rightpin,HIGH);
  delay(100);
  myServo.write(135);
  delay(200);
  digitalWrite(rightpin,LOW);
  delay(200);
  delay(1850);

 for(int m = 0 ; m<8;m++){
   myServo.write(0);
   delay(300);
   myServo.write(36);
   delay(300);
   myServo.write(72);
   delay(300);
   myServo.write(108);
   delay(300);
   myServo.write(144);
   delay(300);
   myServo.write(180);
   delay(300);

 }

}