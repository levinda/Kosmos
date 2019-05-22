#ifndef VECTOR3_H
#define VECTOR3_H

struct Point{
    double x;
    double y;
    double z;
};

class Vector3{
private:
    double x;
    double y;
    double z;

public:
    Vector3();
    Vector3(Point);
    Vector3(double x,double y,double z);
    struct Point getComponents();

    Vector3 operator + (const Vector3& rhs);
    Vector3 operator - (const Vector3& rhs);
    Vector3 operator * (const double&);

    double scalar(Vector3);
};
#endif