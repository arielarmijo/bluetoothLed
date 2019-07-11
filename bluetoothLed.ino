#include <stdio.h> 

const int numBytes = 3;

int pwm;
byte inBytes[numBytes];
char tbs[16];

void setup() {
  for(int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() == numBytes) {
    Serial.readBytes(inBytes, numBytes);
    switch(inBytes[0]) {
      case 65:
        Serial.write(digitalRead(inBytes[1]));
        break;
      case 66:
        digitalWrite(inBytes[1], inBytes[2]);
        break;
      case 67:
        sprintf(tbs, "%4d", analogRead(inBytes[1]));
        Serial.print(tbs);
        break;
      case 68:
        pwm = inBytes[2];
        analogWrite(inBytes[1], pwm);
        break;
      case 69:
        Serial.write(pwm);
        break;
    }
  }
}
