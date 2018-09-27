// curvecut.cpp
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018

#include "curvecut.h"
#include "circle.h"
#include "shape.h"
#include <string.h>
#include <iostream>
#inlcude <math.h>

double CurveCut::area() const{
		return Circle::calculateArea();
	
}

double CurveCut::calculateArea(){
	return ((side_a * side_b) - (rad * rad * PI /4));
}

double CurveCut::perimeter() const{
	
	return calculatePer();
}

double CurveCut::calculatePer(){
	return (2*(side_a + side_b) - (2 * rad) + (PI * rad / 2) );
}

void CurveCut::display(){
	cout<< Shape::getName <<endl;
}