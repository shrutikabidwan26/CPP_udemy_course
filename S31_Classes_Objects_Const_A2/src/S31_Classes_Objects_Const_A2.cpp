//============================================================================
// Name        : S31_Classes_Objects_Const_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : modify the Point class definition in such a way that we can use it like below

/*     Point p1(21.2,4.2);
     p1.x() = 33.3;
     p1.y() = 44.4;
     print_point(p1);
and get

Point[x : 33.3, y : 44.4]

as the output.

You will put your code within the allocated slot in the exercise.h file.

Our test code will create a bunch of objects from your modified class to see if you got this right.
*/
//============================================================================

#include <iostream>
#include <string>

class Point
{
public:
		Point(double x = 0.0, double y = 0.0): x_(x), y_(y) {}

	double& x() { return x_; }
	double& y() { return y_; }

private:
	double x_;
	double y_;
};


void print_point(Point p)
{
	std::cout << "Point[x : " << p.x() << ", y : " << p.y() << "]" << std::endl;
}

int main()
{
	Point p1(21.2, 4.2);
	p1.x() = 33.3;
	p1.y() = 44.4;
	print_point(p1);

	return 0;
}
