#pragma once
#include <iostream>
#include "cPoint.h"
using namespace std;


class cRect
{
private:
	cPoint _a;
	cPoint _b;
	cPoint _c;
	cPoint _d;

public:
	//Default constructor
	cRect() {}
	// Create a rectangle
	cRect(cPoint a, cPoint b, cPoint c, cPoint d) {
		this->_a = a;
		this->_b = b;
		this->_c = c;
		this->_d = d;
	}

	// Point Getter
	cPoint getPoint(int num) const;

	// Point Setter
	void setPoint(cPoint a, int num);

	// Print all rectangle points
	void printRect() const;

	// Calculate the area of the rectangle
	double calcArea();
	
};

