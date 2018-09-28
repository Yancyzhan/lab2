// shape.cpp
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018

#include "point.h"
#include "shape.h"
#include <string.h>
#include <iostream>
#include <math.h>

using namespace std;


Shape::Shape(double x,double y, char* sName):origin(x,y){
	
	
	shapeName = new char(strlen(sName) + 1);
	strcpy(shapeName,sName);
}
Shape::~Shape(){
	delete [] shapeName;
}

Shape::Shape(const Shape& source):origin(source.origin), shapeName(new char[strlen(source.shapeName)+1])
{
	if(shapeName == NULL){
		cerr << "Memory not available...";
		exit(1);
	}
	strcpy(shapeName, source.shapeName);
}

Shape& Shape::operator=(const Shape& rhs)
{
	if(this==&rhs)
		return *this;
	delete [] shapeName;
	shapeName = new char[strlen(rhs.shapeName)+1];
	if(shapeName == NULL){
		cerr << "Memory not available...";
		exit(1);
	}
	strcpy(shapeName, rhs.shapeName);
	origin = rhs.origin;
	return *this;
}

	char* Shape::getName()const
{
	return shapeName;
}
Point& Shape::getOrigin(){
	
	return origin;
}
void Shape::display()
{
	cout<<"Shape Name:"<< this->getName()<<endl;
	cout<<"X-coordinate:"<< this->origin.getX()<<endl;
	cout<<"Y-coordinate:"<< this->origin.getY()<<endl;
}

double Shape::distance(Shape& other){
	//return other.origin.getY() - other.origin -> get_x();
	double numX = (this->origin.getX()- other.origin.getX()) * (this->origin.getX()- other.origin.getX());
	double numY = (this->origin.getY()- other.origin.getY()) * (this->origin.getY()- other.origin.getY());
	
	double num = numX + numY;
	double dist = pow(num,0.5);
	
	return dist;
}

//static double Shape::distance (Shape& the_shape, Shape& other){}
	


void Shape::move(double dx, double dy)
{
	origin.setx((this->origin.getX()) + dx);
	origin.sety((this->origin.getY()) + dy);
}

