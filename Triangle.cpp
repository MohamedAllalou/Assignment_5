// Imaad Iqbal 40017755
// Mohammed Allaloul 40010809


#include "Triangle.h"

Triangle::Triangle(Point a, Point b, Point c)
{
    p1 = a;
    p2 = b;
    p3 = c;
}

Triangle::~Triangle()
{
    //dtor
}

void Triangle::print()
{
    cout << endl << "------------";
    cout << endl << "Triangle: ";
    p1.print();
    p2.print();
    p3.print();
    cout << "------------" << endl;
}
