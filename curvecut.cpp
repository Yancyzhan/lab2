// curvecut.cpp
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018

#include "curvecut.h"
// #include "circle.h"
// #include "shape.h"
#include <string.h>
#include <iostream>
#include <math.h>

double CurveCut::area() const{
		return ((side_a * side_b) - (r * r * PI /4));
	
}

// double CurveCut::calculateArea(){
	// return ((side_a * side_b) - (rad * rad * PI /4));
// }

double CurveCut::perimeter() const{
	
	return calculatePer(2*(side_a + side_b) - (2 * r) + (PI * r / 2));
}

// double CurveCut::calculatePer(){
	// return (2*(side_a + side_b) - (2 * rad) + (PI * rad / 2) );
// }

void CurveCut::display(){
	cout<<"CurveCut name: "<< getName()<<endl;
	cout<<"X-coordinate: "<< get_x()<<endl;
	cout<<"Y-coordinate: "<< get_y()<<endl;
	cout<<"Width: "<<get_side_a()<<endl;
	cout<<"Length: "<<get_side_b()<<endl;
	cout<<"Radius of the cut: "<<get_r()<<endl;
}