void setup() {
  Serial.begin(9600);
  pinMode(swPin, INPUT);
  digitalWrite(swPin, HIGH);
  pinMode(toggleButtonPin, INPUT_PULLUP);
  pinMode(ltButtonPin, INPUT_PULLUP);
  pinMode(lbButtonPin, INPUT_PULLUP);
  pinMode(rbButtonPin, INPUT_PULLUP);
  pinMode(xButtonPin, INPUT_PULLUP);
  pinMode(yButtonPin, INPUT_PULLUP);
  pinMode(aButtonPin, INPUT_PULLUP);
  pinMode(bButtonPin, INPUT_PULLUP);
  Keyboard.begin();
  Mouse.begin(); // Initialize mouse control

  calibrateJoystick(); // Calibrate joystick
}
