// shape.cpp
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217
//
// Date: Sept 21, 2018


#include "shape.h"
#include <string.h>
#include <iostream>

using namespace std;



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