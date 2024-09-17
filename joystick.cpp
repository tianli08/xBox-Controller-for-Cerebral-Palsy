void calibrateJoystick() {
  Serial.println("Calibrating joystick... Please make sure it is centered.");
  delay(2000); // Wait for 2 seconds to allow time to release the joystick

  // Read the center position of the joystick
  xCenter = analogRead(VrxPin);
  yCenter = analogRead(VryPin);

  Serial.print("Calibration complete. Center X: ");
  Serial.print(xCenter);
  Serial.print(", Center Y: ");
  Serial.println(yCenter);
}
