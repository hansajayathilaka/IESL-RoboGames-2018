void Calibrate() {
  /*int i;
  for (int i = 0; i < 50; i++) {
    qtrrc.calibrate();
    if (i < 10) drive(0, 0);
    if (i < 20) drive(-100, 100);
    if (i < 40) drive(100, -100);
    if (i < 50) drive(-100, 100);
    delay(50);
  }*/
  for (int i = 0; i < 50; i++) {
    //Serial.print(" , ");
    if (i < 10)
      drive(0, 0);
    else if (i < 20)
      drive(-60, 60);
    else if (i < 40)
      drive(60, -60);
    else
      drive(-60, 60);
    qtrrc.calibrate();
      }
  drive(0, 0);

  for (int i = 0; i < NUM_SENSORS; i++) {
    Serial.print(qtrrc.calibratedMinimumOn[i]);
    Serial.print(' ');
  }
  Serial.println();

  for (int i = 0; i < NUM_SENSORS; i++) {
    Serial.print(qtrrc.calibratedMaximumOn[i]);
    Serial.print(' ');
  }
  Serial.println();
  Serial.println();
}
