void updateVal() {
  unsigned int sensors[8];
  int position = qtrrc.readLine(sensors);
  int error = position - 3500;
  
  for (int k = 0; k < 8 ; k++) {
    s[k] = 0;
    if (sensors[k] > 600) s[k] = 1;
  }

  a = 0;
  b = 0;
  if (psa > 100) (a = 1);
  if (psb > 100) (b = 1);
}
