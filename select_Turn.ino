char select_turn(unsigned char found_Left, unsigned char found_Straight, unsigned char found_Right, unsigned char found_Back) {
  if (found_Back)
    return 'B';
  else if (found_Right)
    return 'R';
  else if (found_Straight)
    return 'S';
  else if (found_Left)
    return 'L';
}

