//============================================================================
// Name        : S19_Char_Manuplation_And_String_A3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Making sense of the gibrish
//============================================================================

#include <iostream>
#include <cstring>

int main() {
    const char src1[] {"will old space the replace"};
    const char src2[] {"sense sky  hit has"};
    const char src3[] {"hello went is get"};
    const char src4[] {"red blue yellow orange"};

    char* result = new char[16]; // Dynamically allocate space for result

    // Copy 'the' from src1
    std::strncpy(result, src1 + 5, 3);

    // Copy 'sky' from src2
    std::strncpy(result + 3, src2 + 6, 3);

    // Copy 'is' from src3
    std::strncpy(result + 6, src3 + 6, 2);

    // Copy 'blue' from src4
    std::strncpy(result + 8, src4 + 4, 4);

    result[12] = ' '; // Add space after 'blue'
    result[13] = 'i'; // Add 'i' from 'is'
    result[14] = 's'; // Add 's' from 'is'
    result[15] = '\0'; // Add null terminator

    std::cout << "result : " << result << std::endl;

    delete[] result; // Deallocate dynamic memory

    return 0;
}
