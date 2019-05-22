#include <iostream>
#include <stdio.h>
#include <string>
#include "Vector3.hpp"
#include "Rocket.hpp"

int main(int argc, char **argv) {
   
    Engine RE1(1000);
    Vector3 startingCoordinates(100,0,0);
    Vector3 velocity(0,0,0);
    Vector3 initialThrust(1,0,0);

    Rocket R1(RE1,100,startingCoordinates,velocity,initialThrust);
    // for(int i = 0, i < 10, i++){
    //     R1.makeMovement();
    // }
    return 0;
}