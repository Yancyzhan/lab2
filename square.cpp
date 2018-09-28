// square.cpp
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
			

//
// Date: Sept 21, 2018


#include "square.h"
#include <string.h>
#include <iostream>

using namespace std;

/*Square::Square(double x, double y, double side,char* name):Shape(x,y,name){
	
	side_a = side;
	
	
}*/
double Square::getArea() const{
		return Square::calculateArea();
	
}

double Square::calculateArea(){
	return side_a * side_a;
}

double Square::getPerimeter() const{
	
	return calculatePer();
}

double Square::calculatePer(){
	return (4 * side_a);
}

void Square::display(){
	cout<<"square name: "<< endl;
	
}