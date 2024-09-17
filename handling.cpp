void handleJoystickForArrowKeys() {
  xDirection = analogRead(VryPin);
  yDirection = analogRead(VrxPin);

  if (xDirection < (xCenter - deadZone) && !isLeftPressed) {
    Serial.println("Left");
    Keyboard.press(KEY_LEFT_ARROW);
    isLeftPressed = true;
  } else if (xDirection > (xCenter + deadZone) && !isRightPressed) {
    Serial.println("Right");
    Keyboard.press(KEY_RIGHT_ARROW);
    isRightPressed = true;
  } else if (xDirection >= (xCenter - deadZone) && xDirection <= (xCenter + deadZone)) {
    if (isLeftPressed) {
      Keyboard.release(KEY_LEFT_ARROW);
      isLeftPressed = false;
    }
    if (isRightPressed) {
      Keyboard.release(KEY_RIGHT_ARROW);
      isRightPressed = false;
    }
  }

  if (yDirection < (yCenter - deadZone) && !isDownPressed) {
    Serial.println("Down");
    Keyboard.press(KEY_DOWN_ARROW);
    isDownPressed = true;
  } else if (yDirection > (yCenter + deadZone) && !isUpPressed) {
    Serial.println("Up");
    Keyboard.press(KEY_UP_ARROW);
    isUpPressed = true;
  } else if (yDirection >= (yCenter - deadZone) && yDirection <= (yCenter + deadZone)) {
    if (isDownPressed) {
      Keyboard.release(KEY_DOWN_ARROW);
      isDownPressed = false;
    }
    if (isUpPressed) {
      Keyboard.release(KEY_UP_ARROW);
      isUpPressed = false;
    }
  }
}
