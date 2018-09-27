// shape.cpp
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018

#include "point.h"
#include "shape.h"
#include <string.h>
#include <iostream>

using namespace std;


Shape::Shape(Point& point, char* sName){
	
	origin = point;
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

char Shape::getName()
{
	return shapeName;
}
Point& Shape::getOrigin()const{
	
	return origin;
}
void Shape::display(Shape& other)
{
	cout<<"Shape Name:"<< other.getName()<<endl;
	cout<<"X-coordinate:"<< other.origin -> get_x()<<endl;
	cout<<"Y-coordinate:"<< other.origin -> get_y()<<endl;
}

double Shape::distance(Shape& other){
	return other.origin ->get_y() - other.origin -> get_x();
}

static double Shape::distance (Shape& the_shape, Shape& other){
}

void Shape::move(double dx, double dy)
{
	this.origin -> get_x() += dx;
	this.origin -> get_y() += dy;
}

