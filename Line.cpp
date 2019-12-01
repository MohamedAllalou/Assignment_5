// Imaad Iqbal 40017755
// Mohammed Allaloul 40010809


#include "Line.h"

Line::Line()
{
    //ctor
}

Line::Line(Point a,Point b)
{
    p1 = a;
    p2 = b;
}

Line::~Line()
{
    //dtor
}


void Line::print()
{
    cout << endl << "------------";
    cout << endl << "Line: ";
    p1.print();
    p2.print();
    cout << "------------" << endl;
}
