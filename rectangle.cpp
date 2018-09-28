// rectangle.cpp
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018
//#include "circle.h"
//#include "shape.h"
#include <string.h>
#include <iostream>
#include <math.h>
#include "rectangle.h"

using namespace std;




double Rectangle::area() const{
		return (side_a * side_b);
	
}

// double Rectangle::calculateArea(){
	// return (side_a * side_b);
// }

double Rectangle::perimeter() const{
	
	return (2 * (side_a + side_b));
}

// double Rectangle::calculatePer(){
	// return (2 * (side_a + side_b));
// }

void Rectangle::display(){
	cout<<"Rectangle name: "<< getName()<<endl;
	cout<<"X-coordinate: "<< get_x()<<endl;
	cout<<"Y-coordinate: "<< get_y()<<endl;
	cout<<"Side a: "<<get_side_a()<<endl;
	cout<<"Side b: "<<get_side_b()<<endl;
	cout<<"Area: "<<area()<<endl;
	cout<<"Perimeter: "<<perimeter()<<endl;
}