#include <Servo.h>
#define Servo_pin 9
#define JX_pin 0

Servo myservo;
int joyX_in; 
int servo_angle;

void setup() {
  myservo.attach(9);
}

void loop() {
  joyX_in = analogRead(JX_pin);
  servo_angle = map(joyX_in, 0, 1023, 0,180); 
  myservo.write(servo_angle);
//  myservo.write(joyX_in);
}
