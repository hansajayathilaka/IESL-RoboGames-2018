#include <QTRSensors.h>
#include <Button.h>
#include "Defines.h"

void setup() {
  Serial.begin(9600);
  button.begin();
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PWM0A, OUTPUT);
  pinMode(PWM0B, OUTPUT);
  pinMode(DIRA, OUTPUT);
  pinMode(DIRB, OUTPUT);

  Calibrate();

}


void loop() {
  found_Left = 0;
  found_Straight = 0;
  found_Right = 0;
  found_Back = 0;

  if (button.toggled()) {
    if (button.read() == Button::PRESSED)
      x++;
  }

  y = x % 2;

  if (y == 1){
    findings();
    PID();
    }
  else
    endPath();
}
