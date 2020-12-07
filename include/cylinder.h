#pragma once

#include "circle.h"

class cylinder: public circle{
    private:
        double height;
    public:
        cylinder(double radius = 1.0, double height = 1.0, std::string color = "black");

        double getHeight();

        void setHeight(double &);

        double getVolume();
};
