#include <NewPing.h>
#include <Servo.h>

#define trigPin 12
#define echoPin 10
#define maxDistance 1000

Servo frServo;
Servo flServo;
Servo brServo;
Servo blServo;

NewPing sonar(trigPin, echoPin, maxDistance);

void setup(){
  Serial.begin(115200);
  frServo.attach(8);
  flServo.attach(7);
  brServo.attach(6);
  blServo.attach(5);
  
}

void loop(){
  delay(100);
  int distMS = sonar.ping_median(5);
  int distCM = sonar.convert_cm(distMS);
  Serial.println(distCM);
  if(distCM > 30)
  {
  frServo.write(0);
  flServo.write(180);
  brServo.write(0);
  blServo.write(180);
  }
  else
  {
  frServo.write(180);
  flServo.write(0);
  brServo.write(180);
  blServo.write(0);
  }
  

}
