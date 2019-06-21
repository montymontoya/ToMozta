const int buttonPin = 4;    // the number of the pushbutton pin
const int g1 = 0;           // *** PB0, MOSI, LED
const int g2 = 1;           // *** PB1, MISO
const int g3 = 2;           // *** PB2, SCK, LED
const int g4 = 3;           // *** PB3, PIN2

void setup() {
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  
  pinMode(g1, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(g3, OUTPUT);
  pinMode(g4, OUTPUT);
}

void loop() {
  adelante();
  delay(2000);
  atras();
  delay(2000);
}

void adelante() {
  digitalWrite(g2, LOW);
  digitalWrite(g4, LOW);
  digitalWrite(g1, HIGH);
  digitalWrite(g3, HIGH);
}

void atras() {
  digitalWrite(g1, LOW);
  digitalWrite(g3, LOW);
  digitalWrite(g2, HIGH);
  digitalWrite(g4, HIGH);
}
