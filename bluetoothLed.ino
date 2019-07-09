const int numBytes = 3;

byte inBytes[numBytes];
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() == numBytes) {
    Serial.readBytes(inBytes, numBytes);
    switch(inBytes[0]) {
      case 'G':
        Serial.write(digitalRead(inBytes[1]));
        break;
      case 'R':
        Serial.write(analogRead(inBytes[1]));
        break;
      case 'S':
        digitalWrite(inBytes[1], inBytes[2]);
        break;
    }
  }   
}
