void setup() {
  pinMode(13,OUTPUT);
  pinMode(2,INPUT);
}

void loop() {
  int button = digitalRead(2);
  int dial = analogRead(0);
  if (button==LOW){ // Read the button state
    digitalWrite(13,HIGH);
    tone(9,440);
    delay(500);
    delay(dial);
    } else { 
    digitalWrite(13,LOW);
    noTone(9);
    delay(200);
    delay(dial);
  }
}
