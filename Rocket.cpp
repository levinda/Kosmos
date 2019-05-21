
#include "Rocket.hpp"

const double dt = 0.1;
const double planetMass = 5.95E+24;
const double G = 6.7E-11;

void Rocket::makeMovementWithForces(){
    Vector3 gravityAcceleration;
    gravityAcceleration = deqartCoordinates * G * planetMass / (Vector3.scalar(deqartCoordinates, deqartCoordinates));
    Vector3 thrustAcceleration = mainEngine.getCurrentForce()/mass * thrustVector;
    Vector3 acceleration = gravityAcceleration + thrustAcceleration;
    
    velocity += acceleration * dt;
    
    deqartCoordinates += velocity * dt;
}




