#include <Servo.h>

Servo ceu;

const int SERVO_CEU = 10;
const int START = 12;
const int STOP = 13;

const int LED1 = 3;
const int LED2 = 4;
const int LED3 = 5;

void apagarLeds() {
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
}

void setup() {
  ceu.attach(SERVO_CEU);

  pinMode(START, INPUT_PULLUP);
  pinMode(STOP, INPUT_PULLUP);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  ceu.write(10);
  apagarLeds();
}

void loop() {
  if (digitalRead(START) == LOW) {
    ceu.write(170);
    delay(1000);

    digitalWrite(LED1, HIGH);
    delay(500);

    digitalWrite(LED2, HIGH);
    delay(500);

    digitalWrite(LED3, HIGH);

    while (digitalRead(STOP) == HIGH) {
    }

    apagarLeds();
    ceu.write(10);

    delay(1000);

    while (digitalRead(STOP) == LOW) {
    }
  }
}
