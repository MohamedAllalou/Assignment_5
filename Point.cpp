// Imaad Iqbal 40017755
// Mohammed Allaloul 40010809


#include "Point.h"

Point::Point()
{

}


Point::Point(double a,double b)
{
    x_coor = a;
    y_coor = b;
}

Point::~Point()
{
    //dtor
}

void Point::print()
{
    cout << endl << "Point " << endl;
    cout <<"x_coor: " << x_coor << endl;
    cout <<"y_coor: " << y_coor << endl;
}
