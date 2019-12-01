// Imaad Iqbal 40017755
// Mohammed Allaloul 40010809







#include <iostream>
#include <Point.h>
#include <Line.h>
#include <Triangle.h>
#include <Circle.h>
#include <fstream>
#include <typeinfo>
#include <string>
#include <stdlib.h>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    Point p1 ( 4.1, 3.2);
    Point p2 ( 9.3, 4.7);
    Line line ( p1, p2);
    Point p3 ( 5.8, 7.3);
    Triangle triangle (p1, p2, p3);
    Point p( 2.5, 8.4);
    Circle circle(p, 2.9);


    fstream myfile;
    myfile.open("Objects.csv", fstream::out);

    if(!myfile){
        cout << "Error while opening file" << endl;
    }else{
        cout << "File opened succesfully" << endl;
    }



    if(myfile.is_open()){
            myfile << "p1" << "," <<"Point"<<  "," << p1.Getx_coor() << "," << p1.Gety_coor() << endl;
            myfile << "p2" << "," <<"Point"<< "," <<  p2.Getx_coor() << "," << p2.Gety_coor() << endl;
            myfile << "Line" << "," <<"Line" << "," << line.Getp1().Getx_coor() << "," << line.Getp1().Gety_coor() << "," << line.Getp2().Getx_coor() << "," << line.Getp2().Gety_coor() << endl;
            myfile << "p3" << "," << "Point" << "," << p3.Getx_coor() << "," << p3.Gety_coor() << endl;
            myfile << "triangle" << ","<< "Triangle"  << "," << p1.Getx_coor() << "," << p1.Gety_coor() << "," << p2.Getx_coor() << "," << p2.Gety_coor()<< "," << p3.Getx_coor() << "," << p3.Gety_coor()<< endl;
            myfile << "p"<< "," << "Point" << "," << p.Getx_coor() << "," << p.Gety_coor() << endl;
            myfile << "circle"<< "," <<"Circle" << "," << p.Getx_coor() << "," << p.Gety_coor()<< "," << circle.Getradius() << endl;

            myfile.close();
            if(myfile.is_open()){
                    cout << "File Not closed." << endl;
                }else{
                    cout << "FIle has succesfully closed" << endl;
                }

    }


    string line1, intermediate, object_name, object_class, word;
    vector <string> tokens;
    double fields[6];
    Shape * shapearray[150];
    int b = 0;

    for (int a = 0; a < 150; a++)
    {
        shapearray[a] = NULL;
    }

    myfile.open ("Objects.csv");

    if (myfile.is_open())
    {
        while(getline(myfile, line1))
        {
            stringstream check1(line1);
            tokens.clear();

            while (getline(check1, intermediate, ','))
            {
                tokens.push_back(intermediate);
            }

            for (int i = 2, d = 0; i < tokens.size(); d++, i++)
            {
                fields[d] = atof(tokens[i].c_str());
            }

            if (tokens[1] == "Point")
            {
                shapearray[b] = new Point (fields[0], fields[1]);
            }
            else if (tokens[1] == "Line")
            {
                shapearray[b] = new Line (Point (fields[0], fields[1]) , Point (fields[2], fields[3]));
            }
            else if (tokens[1] == "Triangle")
            {
                shapearray[b] = new Triangle (Point (fields[0], fields[1]), Point (fields[2], fields[3]), Point (fields[4], fields[5]));
            }
            else if (tokens[1] == "Circle")
            {
                shapearray[b] = new Circle (Point (fields[0], fields[1]), fields[2]);
            }

            b++;
            if (b >= 150)
            {
                break;
            }
        }

        myfile.close();

    }
    else {cout << "Unable to open file" << endl;}

    for (int i = 0; i < b && i < 150; i++)
    {
       if(shapearray[i])
       {
           shapearray[i]->print();
       }
    }

    return 0;



    return 0;
}
