void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  
}

void loop() {
  analogWrite(9,2.7); //By writing this we are using 9th pin as PWM i.e Pulse width modulation
  //where we can define the variable voltage syntax- analogWrite(Pin,PWM voltage) and we can vary
  //the range by varying the voltage
  //digitalWrite(9);
  
  int light=analogRead(A0);
  Serial.println(light);
  delay(1000);
  int black=digitalRead(2);
  Serial.println(black);
  // put your main code here, to run repeatedly:

}
