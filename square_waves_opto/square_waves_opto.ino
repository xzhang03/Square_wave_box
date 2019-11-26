//include the fast I/O 2 functions 
// #include "DIO2.h"  

const float modifier = 1.02;

const byte led_pin_1 = 0;
const byte led_pin_2 = 1;
const byte led_pin_3 = 2;

const int pulsewidth = 10000 * modifier; // in micro secs
const long cycletime_1 = 33333 * modifier; // in micro secs
const long cycletime_2 = 50000 * modifier; // in micro secs
const long cycletime_3 = 100000 * modifier; // in micro secs


// Time variables
unsigned long t0, tnow;


void setup() {
  // put your setup code here, to run once:
  pinMode(led_pin_1, OUTPUT);
  pinMode(led_pin_2, OUTPUT);
  pinMode(led_pin_3, OUTPUT);   

  // Serial.begin(19200);
  t0 = micros();
}

void loop() {
  tnow = micros() - t0;
  
  //  Output 1
  
  if ((tnow % cycletime_1) <= pulsewidth){
    digitalWrite(led_pin_1, HIGH);
  }
  else{
    digitalWrite(led_pin_1, LOW);
  }
  
  
  //  Output 2
  if ((tnow % cycletime_2) <= pulsewidth){
    digitalWrite(led_pin_2, HIGH);
  }
  else{
    digitalWrite(led_pin_2, LOW);
  }
  
  
  //  Output 3
  if ((tnow % cycletime_3) <= pulsewidth){
    digitalWrite(led_pin_3, HIGH);
  }
  else{
    digitalWrite(led_pin_3, LOW);
  }

  // delayMicroseconds(5);
}
