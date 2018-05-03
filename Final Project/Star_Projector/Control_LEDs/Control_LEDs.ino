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

        switch(results.value){ //Police car lights
          case 0xFFA25D: //Keypad button "1"
          digitalWrite(bluePin, HIGH);
          delay(100);
          digitalWrite(bluePin, LOW);
          delay(100);
          digitalWrite(redPin, HIGH);
          delay(100);
          digitalWrite(redPin, LOW);
          delay(100);
      
  
          }
    
      
          
          
           

        switch(results.value){ //Airplane blinking lights
          case 0xFF629D: //Keypad button "2"
          digitalWrite(redPin, HIGH);
          delay(100);
          digitalWrite(redPin, LOW);
          delay(100);
          digitalWrite(whitePin, HIGH);
          delay(100);
          digitalWrite(whitePin, LOW);
          delay(2000);
          }

        switch(results.value){ //Fire alarm blinking
          case 0xFFE21D: //Keypad button "3"
          digitalWrite(whitePin, HIGH);
          delay(10);
          digitalWrite(whitePin, LOW);
          delay(10);
          digitalWrite(whitePin, HIGH);
          delay(10);
          digitalWrite(whitePin, LOW);
          delay(1000);
          }

//        irrecv.resume(); 

}
}

