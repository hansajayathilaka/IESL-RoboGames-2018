void findings() {
  //Back
  updateVal();
  if ((a == 0) && (s[0] == 1) && (s[1] == 1) && (s[2] == 1) && (s[3] == 1) && (s[4] == 1) && (s[5] == 1) && (s[6] == 1) && (s[7] == 1) && (b == 0)) {
    sTime = millis();
    while ((a == 0) && (s[0] == 1) && (s[1] == 1) && (s[2] == 1) && (s[3] == 1) && (s[4] == 1) && (s[5] == 1) && (s[6] == 1) && (s[7] == 1) && (b == 0)) {
      updateVal();
      drive(100, 100);
      delay(1);
      u = millis() - sTime;
    }
    if (u > 20) found_Back = 1;
  }

  //Right
  updateVal();
  if ((s[7] == 1) && (s[6] == 1) && (s[5] == 1) && (s[4] == 1) && (s[3] == 1) && (s[0] == 0)) {
    sTime = millis();
    while ((s[7] == 1) && (s[6] == 1) && (s[5] == 1) && (s[4] == 1) && (s[3] == 1) && (s[0] == 0)) {
      updateVal();
      drive(100, 100);
      delay(1);
      r = millis() - sTime;
    }
    if (r > 30) found_Right = 1;
  }

  // Left
  updateVal();
  if ((s[0] == 1) && (s[1] == 1) && (s[2] == 1) && (s[3] == 1) && (s[4] == 1) && (s[7] == 0)) {
    sTime == millis();
    while ((s[0] == 1) && (s[1] == 1) && (s[2] == 1) && (s[3] == 1) && (s[4] == 1) && (s[7] == 0)) {
      updateVal();
      drive(100, 100);
      delay(1);
      l = millis() - sTime;
    }
    if (l > 30) found_Left = 1;
  }

  //Straight
  if ((found_Left == 1) || (found_Right == 1)) {
    updateVal();
    if ((s[0] == 0) && ((s[1] == 1) || (s[2] == 1) || (s[3] == 1) || (s[4] == 1) || (s[5] == 1) || (s[6] == 1)) && (s[7] == 0)) {
      found_Straight = 1;
    }
  }

  unsigned char dir = select_turn(found_Left, found_Straight, found_Right, found_Back);
  turn(dir);

}
