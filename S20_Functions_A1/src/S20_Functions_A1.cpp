//============================================================================
// Name        : S20_Functions_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : sum of indiviual digit
//============================================================================


#include <iostream>

unsigned int digit_sum(unsigned int num)
{
    unsigned int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
	{
    unsigned int num = 62727289;
    std::cout << "Digit sum of " << num << " is " << digit_sum(num) << std::endl;

    num = 79;
    std::cout << "Digit sum of " << num << " is " << digit_sum(num) << std::endl;

		return 0;
	}
