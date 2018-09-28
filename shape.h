// shape.h
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018

#include "point.h"
#include <string.h>

#ifndef SHAPE_H
#define SHAPE_H
class Shape{
	
public:
	Shape(double x, double y, char* name);
	Shape& operator = (const Shape& rhs);
	Shape(const Shape& source);;
	~Shape();
	
	Point& getOrigin();
	
	char* getName() const;
	
	void display();
	
	double distance (Shape& other);
	
	//static double distance (Shape& the_shape, Shape& other);
	
	void move (double dx, double dy);
	//virtual double getArea() = 0;
	//virtual double getPerimeter() = 0;
	
	double getArea() {};
	double getPerimeter() {};
	protected:
	

	Point origin;
	char* shapeName;

};
#endif