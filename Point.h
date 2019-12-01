// Imaad Iqbal 40017755
// Mohammed Allaloul 40010809


#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <Shape.h>
#include <iomanip>

using namespace std;

class Point : public Shape
{
    public:
        Point();
        Point(double,double);
         virtual ~Point();
         void print();

        double Getx_coor() { return x_coor; }
        void Setx_coor(double val) { x_coor = val; }
        double Gety_coor() { return y_coor; }
        void Sety_coor(double val) { y_coor = val; }



    private:
        double x_coor;
        double y_coor;
};

#endif // POINT_H
