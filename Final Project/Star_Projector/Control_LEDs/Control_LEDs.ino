#include <IRremote.h>

const int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;
const int bluePin = 4;
const int redPin = 3;
const int whitePin = 2;


void setup(){
  irrecv.enableIRIn();
  irrecv.blink13(true);
  pinMode(bluePin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(whitePin, OUTPUT);
}

void loop(){
    if (irrecv.decode(&results)){

        switch(results.value){ //this is LED variation 1
          case 0xFFA25D: //Keypad button "1"
          digitalWrite(bluePin, HIGH);
          delay(200);
          digitalWrite(bluePin, LOW);
          delay(200);
          digitalWrite(redPin, HIGH);
          delay(200);
          digitalWrite(redPin, LOW);
          delay(200);
          digitalWrite(whitePin, HIGH);
          delay(200);
          digitalWrite(whitePin, LOW);
          delay(200);
  
          }

        switch(results.value){ //this is LED variation 2
          case 0xFF629D: //Keypad button "2"
          digitalWrite(redPin, HIGH);
          delay(2000);
          digitalWrite(redPin, LOW);
          }

        switch(results.value){ //this is LED variation 3
          case 0xFFE21D: //Keypad button "3"
          digitalWrite(whitePin, HIGH);
          delay(2000);
          digitalWrite(whitePin, LOW);
          }

        irrecv.resume(); 

}
}

