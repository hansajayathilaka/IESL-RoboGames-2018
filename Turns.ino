void turn(char dir) {
  switch (dir) {
    case 'L':
      Left();
      break;

    case 'R':
      Right();
      break;

    case 'B':
      Back();
      break;

    case 'S':
      Straight();
      break;
  }
}

void Left() {
  updateVal();
  for (int n; (abs(error) == 3500) || n < 50; n++) {
    drive(-200, 200);
    delay(1);
    updateVal();
  }
}

void Right() {
  updateVal();
  for (int n; (abs(error) == 3500) || n < 50; n++) {
    drive(200, -200);
    delay(1);
    updateVal();
  }
}

void Back() {
  updateVal();
  for (int n; (abs(error) == 3500) || n < 150; n++) {
    drive(200, -200);
    delay(1);
    updateVal();
  }
}

void Straight() {
  PID();
}
