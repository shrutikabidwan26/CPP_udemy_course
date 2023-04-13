//============================================================================
// Name        : S20_Function_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : palindrome
//============================================================================

#include <iostream>
#include <string>

bool is_palindrome(unsigned long long int num)
{
    unsigned long long int reversed = 0, original = num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed == original;
}

int main()
{
    unsigned long long int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;
    if (is_palindrome(num))
    {
        std::cout << num << " is a palindrome" << std::endl;
    } else {
        std::cout << num << " is not a palindrome" << std::endl;
    }
    return 0;
}
