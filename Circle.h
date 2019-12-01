// Imaad Iqbal 40017755
// Mohammed Allaloul 40010809


#ifndef CIRCLE_H
#define CIRCLE_H
#include <Point.h>
#include <Shape.h>
#include <iomanip>


class Circle : public Shape
{
    public:
        Circle(Point, double);
         virtual ~Circle();
         void print();

        Point Getp() { return p; }
        void Setp(Point val) { p = val; }
        double Getradius() { return radius; }
        void Setradius(double val) { radius = val; }



    private:
        Point p;
        double radius;
};

#endif // CIRCLE_H
