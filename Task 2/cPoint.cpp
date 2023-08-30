#include "cPoint.h"

/*
Coordinates in the plane - 'x' and 'y'
*/
cPoint::cPoint()
{
	this->_x = 0;
	this->_y = 0;
}

void cPoint::printPoint() const {
	cout << "(" << this->_x << ", " << this->_y << ")";
}

double cPoint::getX() {
	return this->_x;
}

double cPoint::getY() {
	return this->_y;
}

void cPoint::setX(double x) {
	this->_x = x;
}

void cPoint::setY(double y) {
	this->_y = y;
}

