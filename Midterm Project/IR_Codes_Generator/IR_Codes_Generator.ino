
#include <IRremote.h> //include the library
//PIN
int receiver = 11;
IRrecv irrecv(receiver); //create a new instance of receiver
decode_results results;
void setup() {
 Serial.begin(9600);
 irrecv.enableIRIn(); //start the receiver
}
void loop() {
 if (irrecv.decode(&results)) { //we have received an IR
 Serial.println (results.value, HEX); //display HEX
 irrecv.resume(); //next value
 }
}
