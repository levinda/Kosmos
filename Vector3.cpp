

#include "Vector3.hpp"

Vector3::Vector3(): QSMatrix(3,1,0.0){
}
Vector3::Vector3(Point initial):QSMatrix(3,1,0.0){
    
}

Point Vector3::getComponents(){
    return {0,0,0};
}
