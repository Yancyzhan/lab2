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


double Circle::area() const{
		return (r * r * PI);
	
}

// double Circle::calculateArea(){
	// return (r * r * 3.14);
// }

double Circle::perimeter() const{
	
	return (rad * 2 * PI);
}

// double Circle::calculatePer(){
	// return (rad * 2 * PI);
// }

void Circle::display(){
	cout<<"Circle name: "<< getName()<<endl;
	cout<<"X-coordinate: "<< get_x()<<endl;
	cout<<"Y-coordinate: "<< get_y()<<endl;
	cout<<"r: "<<get_r()<<endl;
	cout<<"Area: "<<area()<<endl;
	cout<<"Perimeter: "<<perimeter()<<endl;
}