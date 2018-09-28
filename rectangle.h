// rectangle.h
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "square.h"
#include "shape.h"

class Rectangle: public Square {
public:
	Rectangle(double x, double y, double sidea, double sideb, char* name): Square(x,y,sidea, name){side_a = sidea; side_b=sideb;};
	double area() const;
	double calculateArea();
	double perimeter() const;
	double calculatePer();
	void display();
	
private:
	int side_a; 
	int side_b;
};
#endif
