
#include "Engine.hpp"

Engine::Engine(){
    maxForce = 0.0;
    forceLevel = 0.0;
    switchedOn = false;
}

Engine::Engine(double force){
    maxForce = force;
}