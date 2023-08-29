#pragma once
#include <iostream>
using namespace std;

class cPoint
{
private:
	double _x;
	double _y;

public:
	//Default constructor
	cPoint();
	// Create a (x,y) point
	cPoint(double x, double y) {
		this->_x = x;
		this->_y = y;
	}
	// X Getter
	double getX();

	// Y Getter
	double getY();

	// X Setter
	void setX(double x);

	// Y Setter
	void setY(double y);

	// Print (x,y) point
	void printPoint() const;
};
