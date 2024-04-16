#include <SoftwareSerial.h>
#include <Servo.h>

Servo servoMotor;

SoftwareSerial BTSerial (6,7);

void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
  servoMotor.attach(2);
}

void loop() {

  if (BTSerial.available()){
    char Mensaje =BTSerial.read();
    if (Mensaje == 'A'){
      servoMotor.write(90);
      delay(800);
      servoMotor.write(0);
      delay(800);
    }
  }
}
