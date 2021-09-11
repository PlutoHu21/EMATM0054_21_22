#include "motors.h"
#include "linesensor.h"
#include "encoders.h"
#include "kinematics.h"
#include "pid.h"


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  delay(1000);
  Serial.println("***RESET***");

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("loop");
  delay(10);
}
