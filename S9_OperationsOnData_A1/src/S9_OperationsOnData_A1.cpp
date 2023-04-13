//============================================================================
// Name        : S9_OperationsOnData_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Write a C++ Program to convert from Celcius to Fahrenheit
//============================================================================

 #include<iostream>

    int main ()
    {
        std::cout << "Please enter a degree value in Celsius : " << std::endl;
        double cel;
        std::cin >> cel;
        double fahrenheit = (9.0 / 5) * cel + 32; // Please note the 9.0 . If we did (9/1) we would loose fractional data
        std::cout << cel << " Celsius is " << fahrenheit << " Fahrenheit";

        return 0;
    }
