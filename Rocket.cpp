
#include "Rocket.hpp"

const double dt = 0.1;
const double planetMass = 5.95E+24;
const double G = 6.7E-11;


Rocket::Rocket(Engine engine, double _mass, Vector3 coordinates, Vector3 _velocity, Vector3 thrust){
    mainEngine = engine;
    mass = _mass;
    deqartCoordinates = coordinates;
    velocity = _velocity;
    thrustVector = thrust;
}

void Rocket::makeMovementWithForces(){
    Vector3 gravityAcceleration;;
    gravityAcceleration = deqartCoordinates * ( G * planetMass / deqartCoordinates.scalar(deqartCoordinates));
    Vector3 thrustAcceleration = thrustVector * (  mainEngine.getCurrentForce() / mass);
    Vector3 acceleration = gravityAcceleration + thrustAcceleration;

    velocity = velocity + acceleration * dt;
    deqartCoordinates = deqartCoordinates + velocity * dt;
}






