//============================================================================
// Name        : S26_FunTheMisFits_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : write code for a function that tracks how many times it's been called.
//============================================================================

#include <iostream>

void func()
{
    static int count = 0;
    ++count;
    for (int i = 1; i <= count; ++i)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    func();
    func();
    func();
    func();
    return 0;
}
