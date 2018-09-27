// curvecut.h
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018

#ifndef CURVECUT_H
#define CURVECUT_H

class Circle: public Shape{
public:
	Circle(int radius): rad(radius);
	char getName() const;
	double area() const;
	double calculateArea();
	double perimeter() const;
	double get_radius() const;
	void set_radius(double r);
	double calculatePer();
	void display(Shape& shape);
	
private:
	int rad;
	
};
#endif