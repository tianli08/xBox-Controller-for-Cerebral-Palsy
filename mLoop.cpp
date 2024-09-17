void loop() {
  // Arrow Keys Control Logic
  handleJoystickForArrowKeys();

  handleMouseControl();
  handleLtButton();

  // Handle face and bumper buttons
  handleToggleButton();
  handleLbButton();
  handleRbButton();
  handleXButton();
  handleYButton();
  handleAButton();
  handleBButton();

  delay(10); // Small delay to ensure loop doesn't run too fast
}
