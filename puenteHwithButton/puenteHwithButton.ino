const int buttonPin = 4;    // the number of the pushbutton pin
const int g1 = 0;           // *** PB0, MOSI, LED
const int g2 = 1;           // *** PB1, MISO
const int g3 = 2;           // *** PB2, SCK, LED
const int g4 = 3;           // *** PB3, PIN2

int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the pushbutton pin as an input:
  // pinMode(buttonPin, INPUT);
  
  pinMode(g1, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(g3, OUTPUT);
  pinMode(g4, OUTPUT);
  
  Serial.begin(9600);

}

void loop() {
  // read the state of the pushbutton value:
  //buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
/*  
if (buttonState == HIGH) {   
    adelante();
  } else {
    atras();
  }
*/

 if(Serial.available()){
  String lectura = Serial.readString();

 }
}

void adelante() {
  digitalWrite(g2, LOW);
  digitalWrite(g4, LOW);
  digitalWrite(g1, HIGH);
  digitalWrite(g3, HIGH);
}

void detener() {
  digitalWrite(g2, LOW);
  digitalWrite(g4, LOW);
  digitalWrite(g1, LOW);
  digitalWrite(g3, LOW);
}

void atras() {
  digitalWrite(g1, LOW);
  digitalWrite(g3, LOW);
  digitalWrite(g2, HIGH);
  digitalWrite(g4, HIGH);
}
