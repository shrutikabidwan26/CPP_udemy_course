//============================================================================
// Name        : S16_Arrays_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Eliminating duplicates number form an array in c++
//============================================================================


#include <iostream>
#include <algorithm>

int main()
{
    int arr[] = {3, 2, 1, 2, 3, 4, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array
    std::sort(arr, arr + n);

    // Remove duplicates
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[j] = arr[i];
            j++;
        }
    }
     	 n = j;

    // Print the unique elements
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
