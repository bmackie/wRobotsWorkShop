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
//Servo movement - servoName.write(speed)
//Ultrasonic sensor ping for microseconds - sonar.ping_median(amount of pings)
//Convert from Microseconds to cm - sonar.convert_cm(Microseconds int)


void loop(){
  
}
