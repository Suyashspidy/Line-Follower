void setup() {
Serial.begin(9600);
pinMode(6,OUTPUT);  //TRIGGER
pinMode(7,INPUT);   //ECHO
pinMode(13,OUTPUT); //FOR LED
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration,distance;
  digitalWrite(6,LOW);
  delay(2);
  digitalWrite(6,HIGH);
  delay(10);
  digitalWrite(6,LOW);
  duration=pulseIn(7,HIGH);  //Reads a pulse (either HIGH or LOW) on a pin. 
  //For example, if value is HIGH, pulseIn() waits for the pin to go HIGH, 
  //starts timing, then waits for the pin to go LOW and stops timing. 
  distance=(duration/2)/29.1;
  if(distance<10)
  {
    digitalWrite(13,HIGH);
    Serial.println(distance);
    delay(1000);
  }
  else
  {
   digitalWrite(13,LOW); 
   Serial.println(distance);
   delay(1000);
   }
}
