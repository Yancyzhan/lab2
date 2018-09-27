// point.cpp
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
			

//
// Date: Sept 21, 2018


#include "point.h"
#include <string.h>
#include <iostream>

using namespace std;

Point::Point(double nX, double nY){
	set_x(nX);
	set_y(nY);
	id++;
	counter++;
}
void Point::display()
{
	cout<<"X-coordinate:"<<Point::get_x()<< endl;
	cout<<"Y-coordinate:"<<Point::get_y()<< endl;
	
}

void Point::initial()
{

}
	
static int Point::getCounter()
{
	return counter;
}

double Point::get_x() const
{
	return x;
}

double Point::get_y()const
{
	return y;
}

int Point::get_id() const
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
