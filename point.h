// point.h
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018
#ifndef POINT_H
#define POINT_H
class Point {
public:
Point(double nx, double ny);
void display();
//static int getCounter(){return counter;}
double getX() const {return x;};
double getY() const{return y;};
void setx(double a){x = a;}
void sety(double a) {y = a;}
//static int distance(Point p, Point q);
double distance(Point other) const;

private:
double x;
double y;
double id;
//static int counter;
};
#endif