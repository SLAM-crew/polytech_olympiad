#ifndef _ULTRA_H_
#define _ULTRA_H_

#include <SharpIR.h>
#include <Arduino.h>

class Ultrasonic {
    private:
        int trigPin, echoPin;
    public:
        long duration;
        int distance;
        // SharpIR sharpIR;
        void init(int trigPin, int echoPin);
        // void init_sharp(SharpIR sharp);
        int getDistance();
        bool objectDetected(int range);
};

#endif