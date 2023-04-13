//============================================================================
// Name        : S16_Arrays_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : write a calculator app that prompts for the user for the result
//				of an operation. It'll tell the user if they got it right or if
//				the messed up big time!
//============================================================================

#include <iostream>
#include <string>

int main()
{
    int num1, num2, result;
    char op;
    bool correct;

    // Get input from user
    std::cout << "Enter a math problem (e.g. 2 + 3): ";
    std::cin >> num1 >> op >> num2;

    // Calculate the expected result
    switch (op)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            std::cerr << "Invalid operator" << std::endl;
            return 1;
    }

    // Get input from user for the result
    std::cout << "What is the result? ";
    std::cin >> correct;

    // Check if the result is correct
    if (correct == result)
    {
        std::cout << "Congratulations! You got it right!" << std::endl;
    } else {
        std::cout << "Sorry, that's not correct. The answer is " << result << "." << std::endl;
    }

    return 0;
}
