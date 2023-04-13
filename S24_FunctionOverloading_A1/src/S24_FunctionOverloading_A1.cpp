//============================================================================
// Name        : S24_FunctionOverloading_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : write three overloads for the add function
//============================================================================

#include <iostream>
#include <string>

double add(double a, double b)
{
    return a + b;
}

std::string add(std::string& a, std::string& b)
{
    return a + b;
}

const char* add(char* a, const char* b)
{
    std::string result = a;
    result += b;
    return result.c_str();
}

int main()
{
    double x = 1.5, y = 2.5;
    std::cout << "The sum of " << x << " and " << y << " is " << add(x, y) << std::endl;

    std::string s1 = "sasken, ";
    std::string s2 = "technologies";
    std::cout << "The concatenation of \"" << s1 << "\" and \"" << s2 << "\" is \"" << add(s1, s2) << "\"" << std::endl;

    char cstr1[] = "sasken, ";
    const char* cstr2 = "technologies";
    const char* result = add(cstr1, cstr2);
    std::cout << "The concatenation of \"" << cstr1 << "\" and \"" << cstr2 << "\" is \"" << result << "\"" << std::endl;

    return 0;
}
