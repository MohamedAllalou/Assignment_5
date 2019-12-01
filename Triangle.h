#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <Point.h>
#include <Shape.h>
#include <iomanip>

class Triangle : public Shape
{
    public:
        Triangle(Point,Point,Point);
         virtual ~Triangle();
        void print();

        Point Getp1() { return p1; }
        void Setp1(Point val) { p1 = val; }
        Point Getp2() { return p2; }
        void Setp2(Point val) { p2 = val; }
        Point Getp3() { return p3; }
        void Setp3(Point val) { p3 = val; }



    private:
        Point p1;
        Point p2;
        Point p3;
};

#endif // TRIANGLE_H
