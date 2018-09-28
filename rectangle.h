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
	Rectangle(double x, double y, double sidea, double sideb, char* name): Square(x,y,sidea,name),Shape(x,y,name){side_a = sidea; side_b=sideb;}
	double getArea();
	
	double getPerimeter();

	void display();
	void set_side_a(int a){side_a = a;}
	void set_side_b(int b){side_b = b;}
	int get_side_a() const{return side_a;}
	int get_side_b() const{return side_b;}
protected:
	int side_a; 
	int side_b;
};
#endif
