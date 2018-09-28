// curvecut.h
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018

#include "Rectangle.h"
#include "Circle.h"
#ifndef CURVECUT_H
#define CURVECUT_H


class CurveCut: public Rectangle, public Circle{
public:
	CurveCut(double x, double y, double sidea, double sideb, double radius, char* name): Rectangle(x,y,sidea,sideb,name), Circle(x,y,radius,name);

	double area() const;
	//double calculateArea();
	double perimeter() const;
	//double calculatePer();
	void display();
	

};
#endif