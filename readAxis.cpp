int readAxis(int thisAxis, bool invert) {
  int reading = analogRead(thisAxis);
  reading = map(reading, 0, 1023, -12, 12);
  int distance = reading;

  if (abs(distance) < 4) {
    distance = 0;
  }

  if (invert) {
    distance = -distance;
  }

  return distance / mouseSpeedDivisor;
}
