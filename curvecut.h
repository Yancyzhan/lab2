// curvecut.h
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018
#include "rectangle.h"
#include "circle.h"
#ifndef CURVECUT_H
#define CURVECUT_H

class CurveCut: public Rectangle, public Circle{
public:
	CurveCut(int x, int y, int w, int l, int r, char* name): Rectangle(x,y,w,l,name),Circle(x,y,r,name),Shape(x,y,name) {rad=r;width=w;length = l;}
	
	double getArea() const;
	int getLength() const {return length;}
	int getWidth() const{return width;}
	double getPerimeter() const;
	
	void display();
	
private:
	int rad;
	int width;
	int length;
	
};
#endif