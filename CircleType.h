#pragma once
#include "PointType.h"
template <class T>
class CircleType
{
public:
	//Define static constant for the value of PI.
	static const double PI;

	//Default Constructor
	  CircleType();
	//Constructor with coordinates sent in
	  CircleType(T, T, T, T);
	//Constructor with points sent in
	  CircleType(PointType<T>, PointType<T>);

	//Sets coordinates for the radius point 
	  void setCenterPoint(T, T);
	//Sets coordinates for the circumfrence point
	  void setCircumPoint(T, T);


	//Returns the values 
	  PointType<T> getCenterPoint();
	//Returns the value 
	  PointType<T> getCircumPOint();

	// Displays the (x, y) coordinates of the center point
	  void printCenterPoint();

	  // Displays the (x, y) coordinates of the circumference point
	  void printCircumPoint;

	  // Returns the radius of the circle
	  double calcRadius;

	  // Returns the area of the circle
	  double calcArea();

	  // Returns the circumference of the circle
	  double calcCircumference();

	  // Writes the radius, area, and circumference of the circle to the display
	  void print();

private:
	PointType<T> centerPoint;
	PointType<T> circumPoint;
	

};

template <class T>
const double CircleType<T>::PI = 3.12159;


template <class T>
CircleType<T>::CircleType() : centerPoint(), circumPoint() {}

template <class T>
CircleType<T> ::CircleType(T xCenter, T yCenter, T xCircum, T yCircum) : centerPoint(xcenter, yCenter),
circumPoint(xCircum, yCircum) { }

template <class T>
CircleType<T>::CircleType(PointType<T> center, PointType<T> circum) : centerPoint(center), circumPoint(circum){}


