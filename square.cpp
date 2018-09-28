// square.cpp
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
			

//
// Date: Sept 21, 2018


#include "square.h"
#include <string.h>
#include <iostream>

using namespace std;

// Square::Square(double x, double y, double side,char* name):Shape(x,y,name){
	
	// side_a = side;
	
	
// }

double Square::area() const{
		return (side_a * side_a);
	
}

// double Square::calculateArea(){
	// return side_a * side_a;
// }

double Square::perimeter() const{
	
	return (4 * side_a);
}

// double Square::calculatePer(){
	// return (4 * side_a);
// }

void Square::display(){
	cout<<"Square name: "<< getName()<<endl;
	cout<<"X-coordinate: "<< get_x()<<endl;
	cout<<"Y-coordinate: "<< get_y()<<endl;
	cout<<"Side a: "<<get_side_a()<<endl;
	cout<<"Area: "<<area()<<endl;
	cout<<"Perimeter: "<<perimeter()<<endl;
	
}