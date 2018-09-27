// circle.h
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018#ifndef CIRCLE_H

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle: public Shape{
public:
	Circle(int radius): rad(radius);
	char getName() const;
	double area() const;
	double calculateArea();
	double perimeter() const;
	double calculatePer();
	void display(Shape& shape);
	
private:
	int rad;
	
};
#endif