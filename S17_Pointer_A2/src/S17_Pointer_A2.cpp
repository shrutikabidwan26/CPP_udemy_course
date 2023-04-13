//============================================================================
// Name        : S17_Pointer_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : figure out which element we would hit if we went offset slots from
//               the beginning of the array.
//============================================================================

#include <iostream>

int main() {
    int data[] {1, 3, 6, 3, 9, 3, 5, 7, 2, 11};
    unsigned int offset = 3;

    int* ptr = data + offset;
    int element = *ptr;
    std::cout << "The element " << offset << " slots away from the beginning is: " << element;

    return 0;
}
