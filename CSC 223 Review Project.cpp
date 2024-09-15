/*
CylinderType Class.cpp : This file contains the implementation and a test program for the CylinderType class,
which represents a cylinder in three-dimensional space. The program creates multiple instances of the CylinderType class,
both with integer and real number types, and tests various operations such as setting and retrieving the center point,
circumference point, and height of the cylinder. It also tests the calculation methods for the radius, area, circumference,
surface area, and volume of the cylinder. The print function is used to display all these values for each test case.
*/

#include "CylinderType.h"
#include <iostream>

int main()
{
    cout << "Test CylinderType with integers: " << endl << endl;

    cout << "Default constructor (cylinder 1): \n";
    CylinderType<int> cylinder1;
    cout << "    Center Point:  ";
    cylinder1.printCenterPoint() ;
    cout << "    Circumference Point: ";
    cylinder1.printCircumPoint() ;
    cout << "    Height: " << cylinder1.getHeight();
    cout << endl << endl;

    cout << "Constructor with coordinates (cylinder2): \n";
    CylinderType<int> cylinder2(5, 3, -4, 0, 8);
    cout << "   Center Point: ";
    cylinder2.printCenterPoint();
    cout << "   Circumference Point: ";
    cylinder2.printCircumPoint();
    cout << "   Height: " << cylinder2.getHeight();
    cout << endl << endl;

    cout << "Test setCenterPoint, setCircumPoint, and setHeight with cylinder1: \n";
    cylinder1.setCenterPoint(5, 3);
    cylinder1.setCircumPoint(0, 3);
    cylinder1.setHeight(4);

    cout << "   Center Point is set to (5, 3) : ";
    cylinder1.printCenterPoint();
    cout << "   Circumference Point is set to (0, 3): ";
    cylinder1.printCircumPoint();
    cout << "   Height is set to 4 : " << cylinder1.getHeight();
    cout << endl << endl;

    cout << "Testing the getCenterPoint and getCircumPoint for cylinder1: \n";
    int  x1, y1, x2, y2;
    cylinder1.getCenterPoint(x1, y1);
    cylinder1.getCircumPoint(x2, y2);
    cout << "x1 = " << x1 << " y1 = " << y1 << " x2 = " << x2 << " y2 = " << y2 << endl;
    cout << endl;

    cout << "Testing calculate methods for cylinder1: " << endl;
    cout << "Radius from cylinder1: " << cylinder1.calcRadius() << endl;
    cout << "Area from cylinder1:  " << cylinder1.calcArea() << endl;
    cout << "Circumference from cylinder1: " << cylinder1.calcCircumference() << endl;
    cout << "Surface Area from cylinder1: " << cylinder1.calcSurfaceArea() << endl;
    cout << "Volume from cylinder1: " << cylinder1.calcVolume() << endl;
    cout << endl;

    cout << "Testing the print function for cylinder2: " << endl;
    cylinder2.print();
    cout << endl << endl;

    cout << endl << "Test CircleType with real numbers: " << endl << endl;

    cout << "Default constructor (cylinder4): \n";
    CylinderType<double> cylinder4;
    cout << "   Center Point: ";
    cylinder4.printCenterPoint();
    cout << "   Circumference Point: ";
    cylinder4.printCircumPoint();
    cout << "   Height: " << cylinder4.getHeight();
    cout << endl << endl;

    cout << "Constructor with coordinates (cylinder5): \n";
    CylinderType<double> cylinder5(5.1, 3.3, -4.6, 0, 3.7);
    cout << "   Center Point: ";
    cylinder5.printCenterPoint();
    cout << "   Circumference Point: ";
    cylinder5.printCircumPoint();
    cout << "   Height: " << cylinder5.getHeight();
    cout << endl << endl;


    cout << "Test setCenterPoint, setCircumPoint and setHeight with cylinder4: \n";
    cylinder4.setCenterPoint(5, 3);
    cylinder4.setCircumPoint(0, 3);
    cylinder4.setHeight(6);
    cout << "   Center Point: ";
    cylinder4.printCenterPoint();
    cout << "   Circumference Point: ";
    cylinder4.printCircumPoint();
    cout << "   Height: " << cylinder4.getHeight();
    cout << endl << endl;

    double c1, d1, c2, d2, h2;

    cout << "Test getCenterPoint, getCircumPoint, and getHeight with cylinder4: \n";
    cylinder4.getCenterPoint(c1, d1);
    cylinder4.getCircumPoint(c2, d2);
    h2 = cylinder4.getHeight();
    cout << "c1 = " << c1 << " d1 = " << d1 << " c2 = " << c2 << " d2 = " << d2 << " h = " << h2 << endl;
    cout << endl;

    cout << "Testing calculate methods for cylinder4: " << endl;
    cout << "Radius from cylinder4: " << cylinder4.calcRadius() << endl;
    cout << "Area from cylinder4 " << cylinder4.calcArea() << endl;
    cout << "Circumference from cylinder4: " << cylinder4.calcCircumference() << endl;
    cout << "Surface Area from cylinder4: " << cylinder4.calcSurfaceArea() << endl;
    cout << "Volume from cylinder4: " << cylinder4.calcVolume() << endl;
    cout << endl;

    cout << "Testing the print function for cylinder5: " << endl;
    cylinder5.print();
    cout << endl << endl;

    return 0;
}