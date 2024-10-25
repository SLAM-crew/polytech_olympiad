#include "Ultrasonic.h"

void Ultrasonic::init(int trigPin, int echoPin) {
    Ultrasonic::trigPin = trigPin;
    Ultrasonic::echoPin = echoPin;
    // pinMode(trigPin, OUTPUT);
    // pinMode(echoPin, INPUT);
}

// void Ultrasonic::init_sharp(SharpIR sharp) {
//     Ultrasonic::sharpIR = sharp;
// }

int Ultrasonic::getDistance() {
    // digitalWrite(trigPin, LOW);
    // delayMicroseconds(2);
    // digitalWrite(trigPin, HIGH);
    // delayMicroseconds(10);
    // digitalWrite(trigPin, LOW);
    // duration = pulseIn(echoPin, HIGH);
    // distance = duration * 0.034/2;

    // if (distance > 200) distance = 200;

    // return sharpIR.getDistance();
}
bool Ultrasonic::objectDetected(int range) {
    if (getDistance() <= range) return true;
    return false;
}