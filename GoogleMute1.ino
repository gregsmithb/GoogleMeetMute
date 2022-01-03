#include "Keyboard.h"

#define tripButton   3
#define closeButton      4
char ctrlKey = KEY_LEFT_CTRL;

void setup()
{
  pinMode(tripButton, INPUT_PULLUP);
  pinMode(closeButton, INPUT_PULLUP);
  Keyboard.begin();
  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(tripButton) == LOW) {
    Serial.println("Trip");
    Keyboard.press(ctrlKey);
    Keyboard.press('d');
    delay(100);
    Keyboard.releaseAll();
    delay(1000);       
  }
  if (digitalRead(closeButton) == HIGH) {
    Serial.println("Close");
    Keyboard.press(ctrlKey);
    Keyboard.press('d');
    delay(100);
    Keyboard.releaseAll();
    delay(1000);   
  }
}
