
#include <Servo.h>

Servo servoBase;
Servo servoBras;

void setup() {
  servoBase.attach(9);
  servoBras.attach(10);
}

void loop() {
  // Position 1 : bras au repos
  servoBase.write(90);
  servoBras.write(90);
  delay(2000);

  // Position 2 : rotation vers la gauche
  servoBase.write(30);
  servoBras.write(60);
  delay(2000);

  // Position 3 : rotation vers la droite
  servoBase.write(150);
  servoBras.write(120);
  delay(2000);

  // Retour à la position initiale
  servoBase.write(90);
  servoBras.write(90);
  delay(2000);
}
