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


	//Returns the center point
	  PointType<T> getCenterPoint();
	//Returns the value  for the x and y coordinates of the circumference point
	  PointType<T> getCircumPoint();

	//Return the x, y coordinates of the center point



	// Displays the (x, y) coordinates of the center point
	  void printCenterPoint();

	  // Displays the (x, y) coordinates of the circumference point
	  void printCircumPoint();

	  // Returns the radius of the circle
	  double calcRadius();

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


template <class T>
void CircleType<T>::setCenterPoint(T xC, T yC) {
	centerPoint.setX(xC);
	centerPoint.setY(yC);
}

template <class T>
void CircleType<T>::setCircumPoint(T xC, T yC)
{
	circumPoint.setX(xC);
	circumPoint.setY(yC);
}

template<class T>
PointType<T> CircleType<T>::getCenterPoint()
{
	return centerPoint;
}

template <class T>
void CircleType<T>::getCenterPoint(T& xC, T& yC)
{
	xC = centerPoint.getX();
	yC = centerPoint.getY();
}

template <class T>
PointType<T> CirckeType<T> ::getCircumPoint()
{
	return circumPoint;
}

