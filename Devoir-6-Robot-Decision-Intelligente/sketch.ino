
const int TRIG_PIN = 5;
const int ECHO_PIN = 18;
const int LED_PIN = 19;

const float SEUIL = 20.0;

void setup() {
  Serial.begin(115200);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  Serial.println("Robot a decision intelligente");
  Serial.println("Seuil de detection : 20 cm");
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duree = pulseIn(ECHO_PIN, HIGH, 30000);

  if (duree == 0) {
    Serial.println("Aucune mesure valide");
    digitalWrite(LED_PIN, LOW);
  } else {
    float distance = duree * 0.0343 / 2.0;

    Serial.print("Distance mesuree : ");
    Serial.print(distance);
    Serial.println(" cm");

    if (distance < SEUIL) {
      digitalWrite(LED_PIN, HIGH);
      Serial.println("DECISION : Obstacle detecte !");
      Serial.println("Action : LED allumee");
    } else {
      digitalWrite(LED_PIN, LOW);
      Serial.println("DECISION : Zone libre");
      Serial.println("Action : LED eteinte");
    }
  }

  Serial.println("--------------------");
  delay(1000);
}
