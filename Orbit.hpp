#ifndef ORBIT_H
#define ORBIT_H

#include <iostream>

class Orbit{
private:
    // Orbit parameters
    double periapsis;
    double incl;
    double e;
    double ascendingNodeAngle;
    double a;
    double b;
    double phi;
    double focal; 
public:
    //Standart initializer
    Orbit();
};

#endif