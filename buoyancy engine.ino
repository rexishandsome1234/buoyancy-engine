#include<Arduino.h>
const int IN3=6;
const int IN4=7;
#define ENB A0
void setup() {
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);
pinMode(ENB,OUTPUT);

}

void loop() {
digtialWrite(IN3,HIGH);
digitalWrite(IN4,LOW);
for(int i=0;i<=255;i++){
analogWrite(ENA,i);
}
}
