#include <iostream>

#include "cylinder.h"
#include "circle.h"

using namespace std;

int main(){
    circle a(10.0, "red");
    cylinder b(0.3,5.0,"green");

    cout << "circle radius : " << a.getRadius() << endl;
    cout << "circle area : " << a.getArea() << endl;
    cout << "circle color : "<< a.getColor() << endl;
    cout << "cylinder radius : " << b.getRadius() << endl;
    cout << "cylinder area : " << b.getArea() << endl;
    cout << "cylinder color : " << b.getColor() << endl;
    cout << "cylinder height : " << b.getHeight() << endl;
    cout << "cylinder volume : " << b.getVolume() << endl;

    return 0;
}