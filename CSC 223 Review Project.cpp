// CSC 223 Review Project.cpp : This is the main to test the PointType class
//

#include <iostream>
#include "PointType.h"

using namespace std;

int main()
{
   
    cout << "Testing Default Constructor" << endl;
    PointType<int> centerP1, circumP1;

    cout << "Center point: ";
    centerP1.print();
    cout << "Circumference point: ";
    circumP1.print();
    cout << endl;

    CircleType<int> Cir1;
    Cir1.printCenterPoint();

    cout << "Test constructor with parameters" << endl;
    PointType<double> centerP2(5.3, 6.7), circumP2(-6.2, 7.5);
    cout << "Center point: ";
    centerP2.print();
    cout << endl;
    ////
    //cout << "Testing the copy constructor" << endl;
    //PointType<int> xCen, xCir;


}

