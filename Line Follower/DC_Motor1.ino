void setup() {
  // put your setup code here, to run once:

  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);//clock wise direction


  //delay(1000);

  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);//anticlock wise direction
  //delay(1000);
  

}
