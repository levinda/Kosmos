

#include "Vector3.hpp"

Vector3::Vector3() = default;

Vector3::Vector3(Point initial){
    x = initial.x;
    y = initial.y;
    z = initial.z;
}

Vector3::Vector3(double _x, double _y, double _z){
    x = _x;
    y = _y;
    z = _z;
}

Point Vector3::getComponents(){
    return {x,y,z};
}

Vector3 Vector3::operator + (const Vector3& rhs){
    Vector3 result;
    result.x = this->x + rhs.x;
    result.y = this->x + rhs.y;
    result.z = this->x + rhs.z;
    return result;
}

Vector3  Vector3::operator - (const Vector3& rhs){
    Vector3 result;
    result.x = this->x - rhs.x;
    result.y = this->x - rhs.y;
    result.z = this->x - rhs.z;
    return result;
}

Vector3 Vector3::operator *(const double& rhs){
    Vector3 result;
    result.x = this->x * rhs;
    result.y = this->x * rhs;
    result.z = this->x * rhs;
    return result;
}

double Vector3::scalar(Vector3 second){
    return(this->x * second.x + this->y * second.y + this->z * second.z);
}

