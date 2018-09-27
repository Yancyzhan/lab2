// square.h
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018
#ifndef SQUARE_H
#define SQUARE_H

class Square: public Shape {
public:
	Square(int side): side_a(side);
	double getArea() const;
	double calculateArea();
	double getPerimeter() const;
	double calculatePer();
	void display(Shape& shape);
	
private:
	int side_a; 
};
#endif
