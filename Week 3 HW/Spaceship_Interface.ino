int switchState = 0;



void setup() {
  // put your setup code here, to run once:
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);

//switch is an input
pinMode(2, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

switchState = digitalRead(2);

if (switchState == LOW){

  //if the button is not pressed
  digitalWrite(3, LOW); //Green LED
  digitalWrite(4, HIGH); //Red LED
  digitalWrite(5, LOW); //Red LED

  delay(1000);

  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(1000);
  
  }
  else{
//press the button
  digitalWrite(3, HIGH); //Green LED
  digitalWrite(4, LOW); //Red LED
  digitalWrite(5, LOW); //Red LED



    
    }


}
