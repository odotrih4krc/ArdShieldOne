#include <Arduino.h>
//#include <LiquidCrystal.h> LCD Screen will be for v2 shield
// C++ code - odot!
// UNO shield - RIH4KRC 
// v1

#define LED_1_PIN 11 
#define LED_2_PIN 12
#define BUTTON_PIN 4
#define BUTTONB_PIN 7

void setup()
{
  Serial.begin(9600);
  pinMode(LED_1_PIN, OUTPUT);
  pinMode(LED_2_PIN, OUTPUT);
  
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(BUTTONB_PIN, INPUT_PULLUP);
}

void loop()
{
  byte buttonState = digitalRead(BUTTON_PIN);
  byte buttonState2 = digitalRead(BUTTONB_PIN);
  
  if (buttonState == LOW) {
    digitalWrite(LED_1_PIN, LOW);
    digitalWrite(LED_2_PIN, HIGH);
    Serial.println("Greetings! I am ODOT! of RIH4KRC");
    Serial.println("CTRL, ALT, DEL... But Never Sleep.");

 
  }
  else {
    digitalWrite(LED_1_PIN, HIGH);
    digitalWrite(LED_2_PIN, LOW);
   
  }
  
  if (buttonState2 == LOW){
    Serial.println("LCD connection coming soon!");
  }
}