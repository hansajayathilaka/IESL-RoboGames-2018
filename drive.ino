void drive(int m1Speed, int m2Speed) {
  setM1Speed(m1Speed);
  setM2Speed(m2Speed);
}

void setM2Speed(int speed) {
  unsigned char reverse = 0;
  if (speed <= 0) {
    speed = -speed;
    reverse = 1;
  }
  if (speed >= 0xFF)
    speed = 0xFF;
  if (reverse) {
    digitalWrite(DIRB, HIGH);
    analogWrite(PWM0B, 0xFF - speed);
  }
  else {
    digitalWrite(DIRB, LOW);
    analogWrite(PWM0B, speed);
  }
}

void setM1Speed(int speed)
{
  unsigned char reverse = 0;
  if (speed <= 0) {
    speed = -speed;
    reverse = 1;
  }
  if (speed >= 0xFF)
    speed = 0xFF;

  if (reverse) {
    digitalWrite(DIRA, HIGH);
    analogWrite(PWM0A, 0xFF - speed);
  }
  else {
    digitalWrite(DIRA, LOW);
    analogWrite(PWM0A, speed);
  }
}
