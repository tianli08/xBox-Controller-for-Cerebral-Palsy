void handleToggleButton() {
  int toggleButtonState = digitalRead(toggleButtonPin);

  if (lastToggleButtonState == LOW && toggleButtonState == HIGH) {
    faceBumperToggleOn = !faceBumperToggleOn;
    Serial.println("Toggle");
  }
  lastToggleButtonState = toggleButtonState;
}

void handleLbButton() {
  char key = '[';
  int lbButtonState = digitalRead(lbButtonPin);

  if (faceBumperToggleOn && lastLbButtonState == HIGH && lbButtonState == LOW) {
    key = '1';
    Keyboard.press(key);
    delay(KEY_RELEASE_DELAY);
    Keyboard.release(key);
    return;
  }
  if (lbButtonState == LOW) {
    if (!lbIsPressed) {
      Keyboard.press(key);
      lbIsPressed = true;
    }
  } else {
    if (lbIsPressed) {
      Keyboard.release(key);
      lbIsPressed = false;
    }
  }
  lastLbButtonState = lbButtonState;
}

void handleRbButton() {
  char key = ']';
  int rbButtonState = digitalRead(rbButtonPin);

  if (faceBumperToggleOn && lastRbButtonState == HIGH && rbButtonState == LOW) {
    key = '2';
    Keyboard.press(key);
    delay(KEY_RELEASE_DELAY);
    Keyboard.release(key);
    return;
  }
  if (rbButtonState == LOW) {
    if (!rbIsPressed) {
      Keyboard.press(key);
      rbIsPressed = true;
    }
  } else {
    if (rbIsPressed) {
      Keyboard.release(key);
      rbIsPressed = false;
    }
  }
  lastRbButtonState = rb
