//============================================================================
// Name        : S28_FunctionTemplate_A4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Your job is to set up an overload the hunt_down function template
//                with a non-template regular function that compares const char * properly.
//============================================================================

#include <iostream>
#include <string>
using namespace std;


template <class T>
void swap_data(T& x, T& y)
{
		T temp;
		temp = x;
		x = y;
		y = temp;
}


int main()
{
	std::string a{"Hello"};
	std::string b{"There"};
	cout << "Before Swap Data: a = " << a <<", b = " << b << endl;

	swap_data(a, b);


	cout << "After Swap Data: a = " << a <<", b = " << b << endl;
	// x now contains "There", y now contains "Hello"

	int c{10};
	int d{20};
	cout << "Before Swap Data: c = " << c <<", d = " << d << endl;

	swap_data(c, d);

	cout << "After Swap Data: c = " << c <<", d = " << d << endl;
	// x now contains 20, y now contains 10
	return 0;
}
