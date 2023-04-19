//============================================================================
// Name        : S30_Classes_A8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Building for the 2D space!
/*Your job is to write a Point class, whose objects will be living in a 2 dimensional space.
 * Your Point type will be special in that it will be usable like below
 *
    Point p1;
    Point p2;
    p2.m_x = 2;
    p2.m_y = 2;
    std::cout << "distance from p1 to p2 : " << p1.distance_to(p2) << std::endl;
to compute the distance between two points.
This should print distance from p1 to p2 : 1.41421
Your class will have two member variables
m_x
m_y

of double type, and a method

distance_to

which computes the distance to another point, the distance will be returned as double . */
//============================================================================

#include <iostream>
#include <cmath>

using namespace std;

class PoinT
{
	public :
	//methods
	double distance_to( Point target)
	{
		return std::sqrt(std::pow(target.m_x - m_x, 2) + std::pow(target.m_y - m_y, 2) * 1.0);
	}
		//member variables
	double m_x{1};
	double m_y{1};
};

int main() {
		Point p1;
		Point p2;
		p2.m_x = 2;
		p2.m_y = 2;
		std::cout << "distance from p1 to p2 : " << p1.distance_to(p2) << std::endl;
	return 0;
}
