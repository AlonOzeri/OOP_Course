#include "cPoint.h"
#include "cRect.h"


int main()
{
	// Declare 4 points
    cPoint c1(2, 4), c2(6, 4), c3(6, 0), c4(2, 0);
	cout << "Points are: " << endl;
	c1.printPoint();
	cout << endl;
	c2.printPoint();
	cout << endl;
	c3.printPoint();
	cout << endl;
	c4.printPoint();
	cout << endl << endl;
	// Declare a rectangle of those 4 points
	cRect rect1(c1,c2, c3, c4);
	cout << "First rectangle is: " << endl;
	rect1.printRect();
	cout << "Point C in the rectangle is: ";
	rect1.getPoint(2).printPoint();
	cout << endl;
	cout << "Point D in the rectangle is: ";
	rect1.getPoint(3).printPoint();
	cout << endl;
	cout << "First rectangle area is: " << rect1.calcArea() << endl << endl;

	// Now we change the points and declare a new Rectangle
	c1.setY(c1.getY() + 1);
	c2.setY(c2.getY() + 1);

	cRect rect2(c1, c2, c3, c4);
	cout << "Second rectangle is: " << endl;
	rect2.printRect();
	cout << "Second rectangle area is: " << rect2.calcArea() << endl << endl;
	c2.setX(c2.getX() - 1);
	c3.setX(c3.getX() - 1);
	// Now instead of changing the points, we will change the rectangle
	rect2.setPoint(c2, 1);
	rect2.setPoint(c3, 2);
	cout << "Second rectangle after change is: " << endl;
	rect2.printRect();
	cout << "Second rectangle area is: " << rect2.calcArea() << endl;
	

}