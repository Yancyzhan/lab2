// point.h
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217
//
// Date: Sept 21, 2018

class Point {
public:
	
	void display();
	
	void initial();
	
	int counter();
	
	double get_x();
	
	double get_y();
	
	int get_id();
	
	void set_x(ox);
	
	void set_y(oy);
	
	static double distance(double x, double y);
	
	double distance (double x, double y);
	
private:
	double x;
	double y;
	int id;
}