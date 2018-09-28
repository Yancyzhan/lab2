// circle.h
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018#ifndef CIRCLE_H

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle: public Shape{
public:
	Circle(double x, double y, double radius, char* name): Shape(x,y,name){r = radius;};
	double get_r() {return r;};
	void set_r(double a) {r = a;};
	double area() const;
	//double calculateArea();
	double perimeter() const;
	//double calculatePer();
	void display();
	
private:
	int r;
	
};
#endif