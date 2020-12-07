#pragma once

#include <string>

#define PI 3.14159265359

class circle{
    protected:
        double radius;
        std::string color;
    
    public:
        circle(double radius = 1.0, std::string color = "black");

        double getRadius();

        std::string getColor();

        void setRadius(double &);

        void getColor(std::string &);

        double getArea();
};