
Servo myservo;


int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {

   myservo.write(126); 
   delay(1000);
   
   myservo.write(19);
   delay(1000);
   
   myservo.write(144); 
   delay(1000);}          
