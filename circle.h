// circle.h
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle: virtual public Shape{
public:
	Circle(double x, double y, double radius,char* name):Shape(x,y,name){rad = radius;}
	void set_rad(double r){rad = r;};
	double get_rad(){return rad;};
	double area() const;
	double calculateArea();
	double perimeter() const;
	double calculatePer();
	void display();
	
protected:
	int rad;
	
};
#endif