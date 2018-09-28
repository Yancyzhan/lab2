// curvecut.cpp
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018

#include "curvecut.h"

#include "shape.h"
//#include "rectangle.h"
#include <string.h>
#include <iostream>
#include <math.h>
using namespace std;

double CurveCut::getArea() const{
	return ((width * length) - (rad * rad * 3.14 /4));
	
}


double CurveCut::getPerimeter() const{
	
	return (2*(width + length) - (2 * rad) + (3.14 * rad / 2) );
}



void CurveCut::display(){
	
	cout<<"CurveCut name: "<< getName()<<endl;
	cout<<"X-coordinate: "<< origin.getX()<<endl;
	cout<<"Y-coordinate: "<< origin.getY()<<endl;
	cout<<"Width: "<<get_side_a()<<endl;
	cout<<"Length: "<<get_side_b()<<endl;
	cout<<"Radius: "<<getArea()<<endl;
	
}