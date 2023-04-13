//============================================================================
// Name        : S26_FunTheMisFits_A3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :write a factorial function with the signature below
//				unsigned int factorial(unsigned int n) using recursion
//============================================================================

#include <iostream>

unsigned int factorial(unsigned int n)
{
    if (n == 0)
    {
        return 1;
    } else {
        return n * factorial(n-1); // recursive call
    }
}

int main()
{
    std::cout << "The factorial of 5 is: " << factorial(5) << std::endl;
    std::cout << "The factorial of 7 is: " << factorial(7) << std::endl;
    return 0;
}
