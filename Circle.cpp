// Imaad Iqbal 40017755
// Mohammed Allaloul 40010809


#include "Circle.h"

Circle::Circle(Point a, double b)
{
    p = a;
    radius = b;
}

Circle::~Circle()
{
    //dtor
}

void Circle::print()
{
    cout << endl << "------------";
    cout << endl << "Circle: ";
    p.print();
    cout << "radius: " << radius << endl;
    cout << "------------" << endl;
}
