#include "cPoint.h"
#include "cRect.h"


int main()
{
	//Declare 4 points
    cPoint p1(2, 4), p2(6, 4), p3(6, 0), p4(2, 0);
	cout << "Points are: " << endl;
	p1.printPoint();
	cout << endl;
	p2.printPoint();
	cout << endl;
	p3.printPoint();
	cout << endl;
	p4.printPoint();
	cout << endl << endl;

	//Declare a rectangle with those 4 points
	cRect rect1(p1, p2, p3, p4);
	cout << "First rectangle is: " << endl;
	rect1.printRect();
	cout << "Point C in the rectangle is: ";
	rect1.getPoint(2).printPoint();
	cout << endl;
	cout << "Point D in the rectangle is: ";
	rect1.getPoint(3).printPoint();
	cout << endl;
	cout << "First rectangle area is: " << rect1.calcArea() << endl << endl;

	//Change the points and declare a new Rectangle
	p1.setY(p1.getY() + 1);
	p2.setY(p2.getY() + 1);
	cRect rect2(p1, p2, p3, p4);
	cout << "Second rectangle is: " << endl;
	rect2.printRect();
	cout << "Second rectangle area is: " << rect2.calcArea() << endl << endl;
	p2.setX(p2.getX() - 1);
	p3.setX(p3.getX() - 1);
	// Now instead of changing the points, we will change the rectangle
	rect2.setPoint(p2, 1);
	rect2.setPoint(p3, 2);
	cout << "Second rectangle after change is: " << endl;
	rect2.printRect();
	cout << "Second rectangle area is: " << rect2.calcArea() << endl;
	

}