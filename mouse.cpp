void handleMouseControl() {
  if (mouseIsActive) {
    int xMouseReading = readAxis(yAxis, false);
    int yMouseReading = readAxis(xAxis, true);
    Mouse.move(xMouseReading, yMouseReading, 0);
  }
  handleMouseButton();
}

void handleMouseButton() {
  if (digitalRead(mouseButtonPin) == HIGH) {
    if (!Mouse.isPressed(MOUSE_LEFT)) {
      Mouse.press(MOUSE_LEFT);
    }
  } else {
    if (Mouse.isPressed(MOUSE_LEFT)) {
      Mouse.release(MOUSE_LEFT);
    }
  }
}
