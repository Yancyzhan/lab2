// square.h
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018
#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"

class Square: public Shape {
public:
	Square(double x, double y, double side,char* name):Shape(x,y,name){side_a = side;};
	double area() const;
	// double calculateArea();
	double perimeter() const;
	double get_side_a() {return side_a;};
	void set_side_a(double a) {side_a = a;};
	// double calculatePer();
	void display();
	
private:
	int side_a; 
};
#endif