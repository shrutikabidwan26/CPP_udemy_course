//============================================================================
// Name        : S20_Function_A3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : insertion sort
//============================================================================

#include <iostream>

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {6, 3, 5, 7, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}