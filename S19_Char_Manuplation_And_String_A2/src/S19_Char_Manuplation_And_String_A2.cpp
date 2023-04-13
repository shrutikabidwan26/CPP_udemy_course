//============================================================================
// Name        : S19_Char_Manuplation_And_String_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :  replaces spaces in a given array of characters with underscore
//				characters and prints the result
//============================================================================

#include <iostream>
#include <cstring>

int main()
{
    char message[] {"The sky is blue my friend."};
    int len = strlen(message);
    char* result = new char[len + 1]; // create a new char array to store the modified string
    for (int i = 0; i < len; i++)
    	{
        if (message[i] == ' ')
        {
            result[i] = '_';
        }
        else {
            result[i] = message[i];
        }
    }
    result[len] = '\0'; // terminate the char array with null character
    std::cout << "After replacing the spaces: " << result << std::endl;
    delete[] result; // free the memory used by the result array
    return 0;
}
