/*
*CSC 223 Review Project.cpp : This program tests the CircleType class by creating circle objects with both integer and
*floating-point coordinates. It demonstrates the use of constructors, setters, and getters, and verifies the calculation
*and printing of the circle's radius, circumference, and area.
*
* 
* Programmer:Aslihan Celik
*/

#include <iostream>
#include "CircleType.h"

using namespace std;

int main()
{
   
    cout << "Testing Default Constructor for Circle1" << endl;
    CircleType<int> Cir1;
    cout << "Center point: ";
    Cir1.printCenterPoint();
    cout << "Circumference point: ";
    Cir1.printCircumPoint();
    cout << endl;

    cout << "Test constructor with parameters for Circle2" << endl;
    CircleType<double> Cir2(5.5, 7.2, -6.4, 3.3);
    cout << "Center point: ";
    Cir2.printCenterPoint();
    cout << "Circumference Point:";
    Cir2.printCircumPoint();
    cout << endl;

    cout << "Testing setCenterPoint, setCircumPoint for Circle1" << endl;
    Cir1.setCenterPoint(3, 7);
    Cir1.setCircumPoint(6, -2);
    cout << "Center Point: ";
    Cir1.printCenterPoint();
    cout << "Circumference Point: ";
    Cir1.printCircumPoint();
    cout << endl;

    cout << "Testing getCenterPoint, getCircumPoint with Circle2" << endl;
    double x1, y1, x2, y2;
    Cir2.getCenterPoint(x1, y1);
    Cir2.getCircumPoint(x2, y2);
    cout << "x1 = " << x1 << " y1 = " << y1 << " x2 = " << x2 << " y2 = " << y2 << endl;
    cout << endl;

    cout << "Testing the calculations for radius, circumference and area for Circle2 " << endl;
    Cir2.print();
    cout << endl;
    

}

