// curvecut.cpp
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018

#include "curvecut.h"
#include <string.h>
#include <iostream>
#inlcude <math.h>

double CurveCut::area() const{
		return CurveCut::calculateArea();
	
}

double CurveCut::calculateArea(){
	return ((side_a * side_b) - (rad * rad * 3.14 /4));
}

double CurveCut::perimeter() const{
	
	return calculatePer();
}

double CurveCut::calculatePer(){
	return (2*(side_a + side_b) - (2 * rad) + (3.14 * rad / 2) );
}

void CurveCut::display(){
	cout<<"\nCurveCut name: "<<getName() <<endl;
	cout<<"X-coordinate: "<<get_x()<<endl;
	cout<<"Y-coordinate: "<<get_y()<<endl;
	cout<<"Width: "<<get_side_a()<<endl;
	cout<<"Length: "<<get_side_b()<<endl;
	cout<<"Radius of the cut: "<<get_rad()<<endl;
}