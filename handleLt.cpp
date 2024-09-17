void handleLtButton() {
  char key = 'q';

  if (digitalRead(ltButtonPin) == HIGH) {
    if (!ltIsPressed) {
      Keyboard.press(key);
      ltIsPressed = true;
    }
  } else {
    if (ltIsPressed) {
      Keyboard.release(key);
      ltIsPressed = false;
    }
  }
}
