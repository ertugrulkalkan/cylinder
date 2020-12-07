#include "circle.h"

circle::circle(double radius, std::string color){
    this->radius = radius;
    this->color = color;
}

double circle::getRadius(){
    return this->radius;
}

std::string circle::getColor(){
            return this->color;
        }
        
void circle::setRadius(double &r){
    this->radius = r;
}

void circle::getColor(std::string &c){
    this->color = c;
}

double circle::getArea() {
    return (PI * this->radius * this->radius);
}
