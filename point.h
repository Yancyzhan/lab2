// point.h
// ENSF 480 - Lab2 - Exercise A

// Author: Yanzhao Zhang 30031217 and Kazi Ashfaq 30021563
//
// Date: Sept 21, 2018

class Point {
public:
	Point(double x, double y);
	
	void display();
	
	void initial();
	
	
	double get_x()const;
	
	double get_y()const;
	
	int get_id()const;
	
	void set_x(double ox);
	
	void set_y(double oy);
	
	static double distance(Point& the_point, Point& other);
	
	double distance (Point& other);
	
	static int getCounter();
	
private:
	double x;
	double y;
	int id = 1000;
	static int counter;
};
