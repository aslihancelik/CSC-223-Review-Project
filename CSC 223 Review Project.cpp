// CSC 223 Review Project.cpp : This is the main to test the PointType class
//

#include <iostream>
#include "CircleType.h"

using namespace std;

int main()
{
   
    cout << "Testing Default Constructor" << endl;
    CircleType<int> Cir1;
    cout << "Center point: ";
    Cir1.printCenterPoint();
    cout << "Circumference point: ";
    Cir1.printCircumPoint();
    cout << endl;

    cout << "Test constructor with parameters" << endl;
    CircleType<double> Cir2(5.5, 7.2, -6.4, 3.3);
    cout << "Center point: ";
    Cir2.printCenterPoint();
    cout << "Circumference Point:";
    Cir2.printCircumPoint();

    cout << "Testing setCenterPoint, setCircumPoint" << endl;
    Cir1.setCenterPoint(3, 7);
    Cir1.setCircumPoint(6, -2);
    cout << "Center Point: ";
    Cir1.printCenterPoint();
    cout << "Circumference Point: ";
    Cir1.printCircumPoint();

    cout << "Testing getCenterPoint, getCircumPoint" << endl;
    double x1, y1, x2, y2;
    Cir2.getCenterPoint(x1, y1);
    Cir2.getCircumPoint(x2, y2);
    cout << "x1 = " << x1 << " y1 = " << y1 << " x2 = " << x2 << " y2 = " << y2 << endl;
    

}

