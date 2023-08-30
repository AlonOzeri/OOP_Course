#include "cRect.h"


/*Receives a number and returns the required point, when:
    0: upper left point
    1: upper right point
    2: lower right point
    3: lower left point
*/
cPoint cRect::getPoint(int num) const {
	if (num == 0)
		return this->_a;
	else if (num == 1)
		return this->_b;
	else if (num == 2)
		return this->_c;
	else if (num == 3)
		return this->_d;
	else
		return this->_a;
}

//Receives a point and a number and performs placement to the appropriate point
void cRect::setPoint(cPoint a, int num) {
	if (num == 0)
		this->_a = a;
	else if (num == 1)
		this->_b = a;
	else if (num == 2)
		this->_c = a;
	else if (num == 3)
		this->_d = a;
	else
		cout << "Error" << endl;
}

//Print the points of the rectangle
void cRect::printRect() const {
	cout << "[ ";
	this->_a.printPoint();
	cout << ", ";
	this->_b.printPoint();
	cout << ", ";
	this->_c.printPoint();
	cout << ", ";
	this->_d.printPoint();
	cout << " ]" << endl;
}

//Calculate the area of the rectangle and return it
double cRect::calcArea() {
	// Diff between c and b
	double Height = this->_b.getY() - this->_c.getY();
	// Diff between b and a
	double Lenght = this->_b.getX() - this->_a.getX();
	return (Height * Lenght);
}

