#ifndef VECTOR3_H
#define VECTOR3_H
#include "matrix.hpp"

struct Point{
    double x;
    double y;
    double z;
};

class Vector3: public QSMatrix<double>{
    public:
    Vector3();
    Vector3(Point);
    struct Point getComponents();

};

#endif