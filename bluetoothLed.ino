int ledPin = 13;
byte command;

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    command = Serial.read();
    switch (command){
      case 'a':
        toggle(ledPin);
        break;
      case 't':
        Serial.print(digitalRead(ledPin));
        break;
    }
  }
}

void toggle(int led) {
  if (digitalRead(led)==HIGH) {
    digitalWrite(led,LOW);
  } else {
    digitalWrite(led,HIGH);
  }
}
