void setup() {
  // put your setup code here, to run once:

  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(5,3.3);
  analogWrite(6,0);//clock wise direction


  //delay(1000);

  analogWrite(9,5);
  analogWrite(10,0);//anticlock wise direction
  //delay(1000);
  

}
