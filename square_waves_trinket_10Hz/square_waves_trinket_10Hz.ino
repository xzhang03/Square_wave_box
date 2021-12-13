//include the fast I/O 2 functions 
// #include "DIO2.h"  

const byte led_pin_1 = 2;
const byte led_pin_2 = 3;
const unsigned int pulsewidth = 6000; // in micro secs
const unsigned int offwidth = 44; // in millisecs

// Debug variables
// unsigned long t0;


void setup() {
  // put your setup code here, to run once:
  pinMode(led_pin_1, OUTPUT);
  pinMode(led_pin_2, OUTPUT);  

  // Serial.begin(19200);
}

void loop() {
  // t0 = micros();
  
  // put your main code here, to run repeatedly:
  digitalWrite(led_pin_1, HIGH);
  delayMicroseconds(pulsewidth);
  digitalWrite(led_pin_1, LOW);
  delay(offwidth);
  
  digitalWrite(led_pin_2, HIGH);
  delayMicroseconds(pulsewidth);
  digitalWrite(led_pin_2, LOW);
  delay(offwidth);

  // Serial.println(micros() - t0);
  
}
