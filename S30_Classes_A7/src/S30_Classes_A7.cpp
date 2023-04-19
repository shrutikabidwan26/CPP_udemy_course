//============================================================================
// Name        : S30_Classes_A7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Setter Chains for Points with references
/*  your job is to set up a bunch of setter functions (inside the class definition) 
 * in such a way that we can assign x and y coordinates to our point object like below

    Point p1;
    p1.set_x(21.2).set_y(4.2);
    print_point(p1);
The code above should print

Point[x : 21.2, y : 4.2] */
//============================================================================

#include <iostream>
using namespace std;

class Point
{
	public :
	//methods
	Point() = default;
	Point(double x, double y)
	{
		m_x = x;
		m_y = y;
	}

	Point& set_x(double x)
	{
		m_x = x;
		return *this;
	}

	Point& set_y(double y)
	{
		m_y = y;
		return *this;
	}


	double x()
{
		return m_x;
	}
	double y()
	{
		return m_y;
	}
	//member variables
	private :
	double m_x{1};
	double m_y{1};
};

void print_point( Point& p)
{
	std::cout << "Point[x : " << p.x() << ", y : " << p.y() << "]" ;
}
int main()
{
		Point p1;
		p1.set_x(21.2).set_y(4.2);
		print_point(p1);
		return 0;
}
