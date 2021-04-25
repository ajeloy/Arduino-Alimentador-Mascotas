int force;
#include <Servo.h> 
Servo miservo;
int pos = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
  miservo.attach(9);
  miservo.write(0);
}

void loop()
{
  force = analogRead(A0);
  if(force == 0){
    digitalWrite(8, HIGH);
  }
  else{
    digitalWrite(8, LOW);
    for (pos = 0; pos <= 90; pos += 1) {
      miservo.write(pos);
      delay(3);
    }
    delay(10000);
    for (pos = 90; pos >= 0; pos -= 1) {
      miservo.write(pos);
      delay(3);
    }
    delay(18000000);
  }
}
