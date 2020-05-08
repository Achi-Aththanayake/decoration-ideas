void allBlink(){
  //function for all blink effect
  //all LED on
  digitalWrite(14, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(1000);
  //all LED off
  digitalWrite(14, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);                       
  delay(1000);
}

void top_to_bottom(){
  //function for top-to-bottom effect
  //pin14 on
  digitalWrite(14, HIGH);
  delay(150);
  //pin14 off
  digitalWrite(14, LOW);
  //pin12 on
  digitalWrite(12, HIGH);
  delay(150);
  //pin12 off
  digitalWrite(12, LOW);
  //pin13 on
  digitalWrite(13, HIGH);
  delay(150);
  //pin13 off
  digitalWrite(13, LOW);
}

void bottom_to_top(){
  //function for bottom-to-top effect
  //pin13 on
  digitalWrite(13, HIGH);
  delay(150);
  //pin13 off
  digitalWrite(13, LOW);
  //pin12 on
  digitalWrite(12, HIGH);
  delay(150);
  //pin12 off
  digitalWrite(12, LOW);
  //pin14 on
  digitalWrite(14, HIGH);
  delay(150);
  //pin14 off
  digitalWrite(14, LOW);
  delay(150);
}

void blinkDouble(){
  //function for all blink double effect
  //two LED on (14,13) and two LED off(12,15)
  digitalWrite(14, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(1000);
  //two LED on (12,15) and two LED off(14,13)
  digitalWrite(12, HIGH);
  digitalWrite(14, LOW);
  digitalWrite(13, LOW);                       
  delay(1000);
}
  
void setup() {
  pinMode(14, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  //all bink effect
  allBlink();
  allBlink();
  allBlink();
  //top-to-bottom effect
  top_to_bottom();
  //bottom-to-top effect
  bottom_to_top();
  //blink double effect
  blinkDouble();
}
