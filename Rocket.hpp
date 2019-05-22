
#ifndef ROCKET_H
#define ROCKET_H

#include "Engine.hpp"
#include "Vector3.hpp"

class Rocket{
private:
    Engine mainEngine;
    double mass;
    Vector3 deqartCoordinates;
    Vector3 velocity;
    Vector3 thrustVector;
public:
    Rocket(Engine engine, double mass, Vector3, Vector3, Vector3);
    // Список если сделать множественные силы, например от разных двигателей
    void makeMovementWithForces();
    void printStatus();
};
#endif

