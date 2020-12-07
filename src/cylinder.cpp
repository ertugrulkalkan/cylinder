#include "cylinder.h"

cylinder::cylinder(double radius, double height, std::string color): circle(radius, color){
    this->height = height;
}

double cylinder::getHeight(){
    return (this->height);
}

void cylinder::setHeight(double &h){
    this->height = h;
}

double cylinder::getVolume(){
    return (this->height) * (this->getArea());
}