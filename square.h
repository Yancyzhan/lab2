// square.h
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21,2018
#include <string.h>
#include "shape.h"
#ifndef SQUARE_H
#define SQUARE_H


class Square:virtual public Shape {
public:
	Square(double x, double y, double side,char* name):Shape(x,y,name){side_a = side;}
	double getArea();
	double calculateArea();
	double getPerimeter();
	double calculatePer();
	double getSide() const {return side_a;}
	void display();
	
private:
	double side_a; 
};
#endif