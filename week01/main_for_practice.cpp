#include <Arduino.h>
#include "Morse.h"

// put function declarations here:
// int myFunction(int, int);
int pin = 11; //8; //Pin LED is attached to 
int pin2 = 10;
int pin3 = 9;
char temp;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
}

Morse morse(pin);
Morse morse2(pin2);
Morse morse3(pin3);

int blinkMorse(String);
int turnLED(String);

void loop() {
    if (Serial.available()) {
        String command = Serial.readStringUntil('\n');
        command.trim();

        if (command.startsWith("blink")) {
            
            blinkMorse(command);            

        } 
        else if (command.startsWith("turn")) {        

            turnLED(command);            

        }
    }
}

int blinkMorse(String value) {
    

    return 1;
}

int turnLED(int value) {
    

    return 1;
}





