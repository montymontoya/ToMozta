#include <SoftwareSerial.h>

const int A = 1;           // *** PB0, MOSI, LED
const int B = 2;           // *** PB1, MISO
const int C = 0;           // *** PB2, SCK, LED

// pin 1 = A = S1 y S4
// pin 2 = B = S2 y S3
// pin 0 = C = S1 y S3

#define RX    3   // *** D6, Pin 3
#define TX    4   // *** D7, Pin 4
SoftwareSerial Serial(RX,TX); 
void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  Serial.begin(9600);  

}

void loop() {
/*
zeros();
adelante();
delay(5000);
zeros();
atras();
delay(5000);
zeros();
detener();
delay(5000);
  */
/*
  Serial.write('a');
  if(Serial.available()){
    if(Serial.read()=='a'){
      zeros();
      adelante();
    }
  }
  */
  if (Serial.available()) {
      int a = Serial.readString().toInt();
      if(a==0){
        zeros();
        adelante();
      }
      else if(a==1){
        zeros();
        atras();
      }
      else if(a==2){
        zeros();
        detener();
      }
      }
}

void zeros(){
  digitalWrite(C,LOW);
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
}
void adelante() {
  digitalWrite(C,LOW);
  digitalWrite(B,LOW);
  digitalWrite(A,HIGH);
}

void detener() {
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
}

void atras() {
  digitalWrite(C,LOW);
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
}
