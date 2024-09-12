/*
This program defines a template class, PointType, to represent points in a two-dimensional plane.
The class provides functions to set and retrieve x and y coordinates, calculate the distance between
two points, and overload the subtraction (-) operator to return the distance between two PointType objects.
The class template supports both integer and decimal coordinates, and includes constructors for initializing
PointType objects.
*/

#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
template <class T>
class PointType
{
private:
	T x;
	T y;
public:

	//Default Constructor
	PointType() { x = 0, y = 0, cout << fixed << setprecision(1) << showpoint;  }
	//Constructor with Parameters
	PointType(T Ux, T Uy) : x(Ux), y(Uy) { cout << fixed << setprecision(1) << showpoint; }   

	//Setters
	void setX(T Ux) { x = Ux; }
	void setY(T Uy) { y = Uy; }
	void setPoint(T Ux, T Uy) {
		x = Ux;
		y = Uy;
	}

	//Getters
	T getX() { return x; }
	T getY() { return y; }
	void getPoint(T& Ux, T& Uy) {
		Ux = x;
		Uy = y;
	}

	//Overloading the - operator with distance calculation
	double operator -(PointType<T> op2) {
		double distance = sqrt(pow(x - op2.x, 2) + pow(y - op2.y, 2));
		return distance;

	}

	//Print the point with x and y coordinates
	void print()
	{
		cout << "(" << x << " , " << y << ")" << endl;
	}

	
};

