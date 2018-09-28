// circle.h
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018
#include "shape.h"
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle: virtual public Shape{
public:
	Circle(double x, double y, double radius,char* name):Shape(x,y,name){rad = radius;}
	
	double getArea() const;
	
	double getPerimeter() const;
	double getRadius() const {return rad;}
	void display();
	
protected:
	double rad;
	
};
#endif