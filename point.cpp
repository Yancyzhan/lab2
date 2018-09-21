// point.cpp
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217
//
// Date: Sept 21, 2018


#include "point.h"
#include <string.h>
#include <iostream>

using namespace std;

void Point::display()
{
	cout<<"X-coordinate:"<<Point::get_x()<< endl;
	cout<<"Y-coordinate:"<<Point::get_y()<< endl;
	
}

void Point::initial()
{

}
	
int Point::counter()
{
	
}

double Point::get_x()
{
	return x;
}

double Point::get_y()
{
	return y;
}

int Point::get_id()
{
	return id;
}

void Point::set_x(double ox)
{
	x = ox; 	
}

void Point::set_y(double oy)
{
	y = oy;
}

double Point::distance(double ox, double oy) 
{
	double dist = oy - ox;
	return dist;
}
