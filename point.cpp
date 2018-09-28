// point.cpp
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
			

//
// Date: Sept 21, 2018


#include "point.h"
#include <string.h>
#include <iostream>
#include <math.h>

using namespace std;

/*static int Point::distance(Point p, Point q) 
{
	int numX = (p.getX() - q.getX()) * (p.getX() - q.getX());
	int numY = (p.getY() - q.getY()) * (p.getY() - q.getY());
	int num = numX + numY;
	int dist = pow(num,0.5);
	
	return dist;
	
}*/
double Point::distance(Point other) const
{
	
	double numX = (this->getX()- other.getX()) * (this->getX()- other.getX());
	double numY = (this->getY()- other.getY()) * (this->getY()- other.getY());
	
	double num = numX + numY;
	double dist = pow(num,0.5);
	
	return dist;
}

void Point::display()
{
	cout<<"X-coordinate:"<<Point::getX()<< endl;
	cout<<"Y-coordinate:"<<Point::getY()<< endl;
	
}