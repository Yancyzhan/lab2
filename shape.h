// shape.h
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217
//
// Date: Sept 21, 2018

#include "Point.h"

class Shape{
	
public:
	Shape& operator = (const Shape& rhs);
	Shape(const Shape& source):origin(source.origin), shapeName(new char[strlen(source.shapeName)+1]);
	~Shape();
	
	double getOrigin();
	
	char getName();
	
	void display();
	
	double distance (Shape& other);
	
	static double distance (Shape& the_shape, Shape& other);
	
	void move (double dx, double dy);
	
private:
	Point origin;
	char* shapeName;

}