#include <IRremote.h>

const int RECV_PIN = 11; 
IRrecv irrecv(RECV_PIN);
decode_results results;
const int LEDPin = 3;



void setup(){
  irrecv.enableIRIn();
  irrecv.blink13(true);
  pinMode(LEDPin, OUTPUT);
 
}

void loop(){
    if (irrecv.decode(&results)){

        switch(results.value){
          case 0xFFA25D: //button "1"
          digitalWrite(LEDPin, HIGH);
          }

        switch(results.value){
          case 0xFF629D: //button "2"
          digitalWrite(LEDPin, LOW);
          }

        irrecv.resume(); 
    }
}
