/*
CSC 223 Review Project.cpp : This program tests the PointType class template by creating points
with integer and floating-point coordinates, printing them, testing the set and get functions,
and calculating the distance between two points using the overloaded subtraction operator.
*
* 
* Programmer:Aslihan Celik
*/

#include <iostream>
#include "PointType.h"

using namespace std;

int main()
{
    cout << "From default constructor" << endl;
    PointType<int> p1I;
    PointType<double> p1D;
    cout << "Integer point: ";
    p1I.print();
    cout << "Double Point: ";
    p1D.print();

    cout << "\nConstructor with parameters" << endl;
    PointType<int> p2I(3, 5);
    PointType<double>p2D(3.5, 5.5);
    cout << "Integer point: ";
    p2I.print();
    cout << "Double point: ";
    p2D.print();
    cout << endl;


    // Test for both Set and Get X and Y for Integer Point 
    p1I.setX(10);
    p1I.setY(20);
    cout << "Integer point after setting X = 10 and Y = 20: (" << p1I.getX() << ", " << p1I.getY() << ")" << endl;

    // Test for both Set and Get X and Y for Double Point 
    p1D.setX(12.5);
    p1D.setY(25.5);
    cout << "Double point after setting X = 12.5 and Y = 25.5: (" << p1D.getX() << ", " << p1D.getY() << ")" << endl;

    // Test for setPoint and getPoint for Integer
    int x, y;
    p1I.setPoint(5, 15);
    p1I.getPoint(x, y);
    cout << "Integer point after setting point (5, 15): (" << x << ", " << y << ")" << endl;

    // Test for setPoint and getPoint for Double
    double dx, dy;
    p1D.setPoint(7.7, 14.4);
    p1D.getPoint(dx, dy);
    cout << "Double point after setting point (7.7, 14.4): (" << dx << ", " << dy << ")" << endl;


    cout << "\n(Integer) Distance = ";
    double distance = p1I - p2I;
    cout << distance << endl;

    cout << "\n(Double) Distance = ";
    distance = p1D - p2D;
    cout << distance << endl;


}

