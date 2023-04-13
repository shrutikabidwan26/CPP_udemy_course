//============================================================================
// Name        : S16_Arrays_A3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : take in an array of integers and figure out if
//                it is sorted in incremental order or not.
//============================================================================

#include <iostream>

bool isSorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int data[] {1, 2, 4, 5, 8, 12, 13, 16, 100, 92};
    int n = sizeof(data) / sizeof(data[0]);

    if (isSorted(data, n))
    {
        std::cout << "The array is sorted in incremental order." << std::endl;
    } else {
        std::cout << "The array is not sorted in incremental order." << std::endl;
    }

    return 0;
}
