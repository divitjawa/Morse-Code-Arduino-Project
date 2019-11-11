const int yellowLED = 9;
const int redLED = 4;
int dit = 300, dash = 900, pause = 300, letterEnd = 900, wait = 2100;

void letterL(int yellowLED, int dit, int redLED, int pause, int dash, int letterEnd) {
  digitalWrite(yellowLED, HIGH); // dot
  delay(dit);
  digitalWrite(yellowLED, LOW);
  delay(pause);
  digitalWrite(yellowLED, HIGH); // dash
  delay(dash);
  digitalWrite(yellowLED, LOW);
  delay(pause);
  digitalWrite(yellowLED, HIGH); // dot
  delay(dit);
  digitalWrite(yellowLED, LOW);
  delay(pause);
  digitalWrite(yellowLED, HIGH); // dot
  delay(dit);
  digitalWrite(yellowLED, LOW);
}

void letterO(int yellowLED, int dit, int redLED, int pause, int dash, int letterEnd) {
  for (int i = 0; i < 2; i++) { // 2 dashes
    digitalWrite(yellowLED, HIGH);
    delay(dash);
    digitalWrite(yellowLED, LOW);
    delay(pause);
  }
  digitalWrite(yellowLED, HIGH); // 3rd dash
  delay(dash);
  digitalWrite(yellowLED, LOW);
}


void setup() {
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  // H
  for (int i = 0; i < 3; i++) { // 3 dots
    digitalWrite(yellowLED, HIGH);
    delay(dit);
    digitalWrite(yellowLED, LOW);
    delay(pause);
  }
  digitalWrite(yellowLED, HIGH); // 4th dot
  delay(dit);
  digitalWrite(yellowLED, LOW);

  digitalWrite(redLED, HIGH);
  delay(letterEnd);
  digitalWrite(redLED, LOW);

  // E
  digitalWrite(yellowLED, HIGH); // dot
  delay(dit);
  digitalWrite(yellowLED, LOW);

  digitalWrite(redLED, HIGH);
  delay(letterEnd);
  digitalWrite(redLED, LOW);

  // L
  letterL(yellowLED, dit, redLED, pause, dash, letterEnd);

  digitalWrite(redLED, HIGH);
  delay(letterEnd);
  digitalWrite(redLED, LOW);

  // L
  letterL(yellowLED, dit, redLED, pause, dash, letterEnd);

  digitalWrite(redLED, HIGH);
  delay(letterEnd);
  digitalWrite(redLED, LOW);

  // O
  letterO(yellowLED, dit, redLED, pause, dash, letterEnd);

  digitalWrite(redLED, HIGH);
  delay(letterEnd);
  digitalWrite(redLED, LOW);

  // HELLO ends, wait between 2 words
  delay(wait);

  // W
  digitalWrite(yellowLED, HIGH); //dot
  delay(dit);
  digitalWrite(yellowLED, LOW);
  delay(pause);
  digitalWrite(yellowLED, HIGH); //dash
  delay(dash);
  digitalWrite(yellowLED, LOW);
  delay(pause);
  digitalWrite(yellowLED, HIGH); // dash
  delay(dash);
  digitalWrite(yellowLED, LOW);

  digitalWrite(redLED, HIGH);
  delay(letterEnd);
  digitalWrite(redLED, LOW);

  // O
  letterO(yellowLED, dit, redLED, pause, dash, letterEnd);

  digitalWrite(redLED, HIGH);
  delay(letterEnd);
  digitalWrite(redLED, LOW);

  // R
  digitalWrite(yellowLED, HIGH); // dot
  delay(dit);
  digitalWrite(yellowLED, LOW);
  delay(pause);
  digitalWrite(yellowLED, HIGH); // dash
  delay(dash);
  digitalWrite(yellowLED, LOW);
  delay(pause);
  digitalWrite(yellowLED, HIGH); // dot
  delay(dit);
  digitalWrite(yellowLED, LOW);

  digitalWrite(redLED, HIGH);
  delay(letterEnd);
  digitalWrite(redLED, LOW);

  // L
  letterL(yellowLED, dit, redLED, pause, dash, letterEnd);

  digitalWrite(redLED, HIGH);
  delay(letterEnd);
  digitalWrite(redLED, LOW);

  // D
  digitalWrite(yellowLED, HIGH); // dash
  delay(dash);
  digitalWrite(yellowLED, LOW);
  delay(pause);
  digitalWrite(yellowLED, HIGH); // dot
  delay(dit);
  digitalWrite(yellowLED, LOW);
  delay(pause);
  digitalWrite(yellowLED, HIGH); // dot
  delay(dit);
  digitalWrite(yellowLED, LOW);

  for (int i = 0; i < 5; i++) {
    delay(wait);
  }
}




