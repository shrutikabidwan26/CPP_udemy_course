//============================================================================
// Name        : S17_Pointer_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : finds the maximum element and its address in an array using a pointer
//============================================================================

#include <iostream>

int main()
{
    int data[] {11, 2, 52, 53, 9, 13, 5, 7, 12, 11};
    int n = sizeof(data) / sizeof(data[0]);

    int* max_ptr = &data[0];

    // Find the pointer to the maximum element
    for (int i = 1; i < n; i++)
    {
        if (data[i] > *max_ptr)
        {
            max_ptr = &data[i];
        }
    }

    std::cout << "The maximum element in the array is " << *max_ptr
              << " at address " << max_ptr << std::endl;

    return 0;
}
