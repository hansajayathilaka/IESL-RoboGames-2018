void PID() {
  unsigned int sensors[8];
  int position = qtrrc.readLine(sensors);
  error = position - 3500;

  int motorSpeed = Kp * error + Kd * (error - lastError);
  lastError = error;

  int rightMotorSpeed = rightBaseSpeed - motorSpeed;
  int leftMotorSpeed = leftBaseSpeed + motorSpeed;

  rightMotorSpeed = constrain(rightMotorSpeed, -rightMaxSpeed, rightMaxSpeed);
  leftMotorSpeed = constrain(leftMotorSpeed, -leftMaxSpeed, leftMaxSpeed);

  drive(leftMotorSpeed, rightMotorSpeed);
}
