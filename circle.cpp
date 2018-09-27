// circle.cpp
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018

#include "circle.h"
#include "shape.h"
#include <string.h>
#include <iostream>
#inlcude <math.h>

using namespace std;


double Circle::area() const{
		return Circle::calculateArea();
	
}

double Circle::calculateArea(){
	return (rad * rad * 3.14);
}

double Circle::perimeter() const{
	
	return calculatePer();
}

double Circle::calculatePer(){
	return (rad * 2 * PI);
}

void Circle::display(){
	cout<< Shape::getName <<endl;
}