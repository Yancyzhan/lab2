// circle.cpp
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018

#include "circle.h"
#include "shape.h"
#include <string.h>
#include <iostream>
#include <math.h>

using namespace std;


double Circle::getArea() const{
		return (rad * rad * 3.14);
	
}



double Circle::getPerimeter() const{
	
	return (rad * 2 * 3.14);
}



void Circle::display(){
	cout<<"Circle name: "<<getName() << endl;
	cout<<"X-coordinate: "<< origin.getX() <<endl;
	cout<<"Y-coordinate: "<< origin.getY() <<endl;
	cout<<"Radius: "<< getRadius()<<endl;
	cout<<"Area: "<< getArea()<<endl;
	cout<<"Perimeter: "<< getPerimeter() <<endl;
}