#include <Servo.h>
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
}