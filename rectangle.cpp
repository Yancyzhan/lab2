// rectangle.cpp
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


double Rectangle::area() const{
		return Rectangle::calculateArea();
	
}

double Rectangle::calculateArea(){
	return (side_a * side_b);
}

double Rectangle::perimeter() const{
	
	return calculatePer();
}

double Rectangle::calculatePer(){
	return (2 * (side_a + side_b));
}

void Rectangle::display(){
	cout<< Square::getName <<endl;
}