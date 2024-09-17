#include <Mouse.h>
#include <Keyboard.h>

// Mouse Control
const int mouseButtonPin = 3;
const int xAxis = A2;
const int yAxis = A3;
bool mouseIsActive = true; // Whether or not to control the mouse
int mouseSpeedDivisor = 2.5; // Divisor to slow down mouse speed

// Joystick Controls for Keyboard Control
const int swPin = 12;
const int VrxPin = A1;
const int VryPin = A0;
int xDirection = 0;
int yDirection = 0;
int switchState = 1;
bool isLeftPressed = false;
bool isRightPressed = false;
bool isUpPressed = false;
bool isDownPressed = false;
int xCenter = 0; // Center value for X-axis
int yCenter = 0; // Center value for Y-axis
int deadZone = 200; // Increased dead zone for reduced sensitivity

// Lt button
const int ltButtonPin = 4;
bool ltIsPressed = false;

// Toggle button
const int toggleButtonPin = 2;
int lastToggleButtonState = LOW;
bool faceBumperToggleOn = false;

// Face and bumper buttons: Lb, Rb, X, Y, A, B
const int KEY_RELEASE_DELAY = 100; // in ms
const int lbButtonPin = 5;
const int rbButtonPin = 6;
const int xButtonPin = 7;
const int yButtonPin = 8;
const int aButtonPin = 9;
const int bButtonPin = 10;
int lastLbButtonState = HIGH;
int lastRbButtonState = HIGH;
int lastXButtonState = HIGH;
int lastYButtonState = HIGH;
int lastAButtonState = HIGH;
int lastBButtonState = HIGH;
bool lbIsPressed = false;
bool rbIsPressed = false;
bool xIsPressed = false;
