/* Basic example code for MAX7219 LED dot matrix display 
  with Arduino. More info: https://www.makerguides.com */

#include "MD_Parola.h"
#include "MD_MAX72xx.h"
#include "SPI.h"

// Define hardware type, size, and output pins:
#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 1
#define CS_PIN 3
#define BUTTON_PIN 12

// Create a new instance of the MD_Parola class with hardware SPI connection:
MD_Parola myDisplay = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);
int i = 0;
int potPin = A5;
// Setup for software SPI:
// #define DATAPIN 2
// #define CLK_PIN 4
// MD_Parola myDisplay = MD_Parola(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);

void setup() {
    pinMode(BUTTON_PIN, INPUT_PULLUP);

  // Intialize the object:
  myDisplay.begin();
  // Set the intensity (brightness) of the display (0-15):
  myDisplay.setIntensity(0);
  // Clear the display:
  myDisplay.displayClear();
  Serial.begin(9600); // open the serial port at 9600 bps:
  
}

void loop() {
  int potVal = analogRead(potPin);   // read the potentiometer value at the input pin
  myDisplay.setTextAlignment(PA_CENTER);
  myDisplay.print(i);
  delay(100);
  byte buttonState = digitalRead(BUTTON_PIN);
  
  if (buttonState == LOW) {
      Serial.println("Button is pressed");
      i = (i+1)%10;
  }
  else {
      Serial.println("Button is not pressed");
  }
}