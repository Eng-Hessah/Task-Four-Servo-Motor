# Task:Four Servo Motor
## Overview

This project demonstrates the control of four Micro Servo motors using an Arduino UNO. The program
executes a "sweep" movement for two seconds, followed by positioning all motors at a 90-degree angle

## Components Used

-Arduino UNO R3
-4 Micro Servo Motors
-Connecting Wires

## Circuit Connections

The motors are connected to the Arduino UNO as follows:

### Power and Ground

-All servo red wires → Arduino 5V
-All servo black/brown wires → Arduino GND

### Signal Pins

-Servo 1 → Pin 9
-Servo 2 → Pin 10
-Servo 3 → Pin 11
-Servo 4 → Pin 6

## Arduino Code

The Arduino source code is available in the servo_motor.ino file
[Uploading ser#include <Servo.h>
Servo s1;
Servo s2;
Servo s3;
Servo s4;
void setup() {
  s1.attach(9);
  s2.attach(10);
  s3.attach(11);
  s4.attach(6);
}
void loop() {
  unsigned long startTime = millis();
  
  while(millis() - startTime < 2000) {
    for(int pos = 0; pos <= 180; pos++) {
      s1.write(pos);
      s2.write(pos);
      s3.write(pos);
      s4.write(pos);
      delay(15);
    }
    for(int pos = 180; pos >= 0; pos--) {
      s1.write(pos);
      s2.write(pos);
      s3.write(pos);
      s4.write(pos);
      delay(15);
    }
  }

  s1.write(90);
  s2.write(90);
  s3.write(90);
  s4.write(90);
  
  while(true);
}vo_motor.ino…]()


## Circuit Diagram

<img width="1219" height="573" alt="Image" src="https://github.com/user-attachments/assets/aebe901b-70c7-4711-871d-84949cd26939" />

## Demonstration Video

This video presents the final result of the project, where the four  servo motors complete their movement sequence and then move to a 90° position, holding this position until the end of the operation.







