// Imaad Iqbal 40017755
// Mohammed Allaloul 40010809


#ifndef LINE_H
#define LINE_H
#include <Point.h>
#include <Shape.h>
#include <iomanip>


class Line : public Shape
{
    public:
        Line();
        Line(Point,Point);
         virtual ~Line();
         void print();

        Point Getp1() { return p1; }
        void Setp1(Point val) { p1 = val; }
        Point Getp2() { return p2; }
        void Setp2(Point val) { p2 = val; }


    private:
        Point p1;
        Point p2;
};

#endif // LINE_H
