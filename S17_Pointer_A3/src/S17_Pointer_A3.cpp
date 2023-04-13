//============================================================================
// Name        : S17_Pointer_A3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :  merge array into a new larger array
//============================================================================

#include <iostream>
using namespace std;

int main()
{
    int data1[] {1,2,3,4,5,66,77};
    int data2[] {10,20,30,40,50,60};

    int size1 = sizeof(data1)/sizeof(data1[0]);
    int size2 = sizeof(data2)/sizeof(data2[0]);

    // Create a new array to hold the merged data
    int *new_array = new int[size1 + size2];

    // Merge the arrays
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2)
    {
        if (data1[i] < data2[j])
        {
            new_array[k] = data1[i];
            i++;
        } else
        {
            new_array[k] = data2[j];
            j++;
        }
        k++;
    }
    while (i < size1)

        new_array[k] = data1[i];
        i++;
        k++;
    }
    while (j < size2)
    {
    	new_array[k] = data2[j];
        j++;
        k++;
    }

    // Print out the merged array
    for (int i = 0; i < size1 + size2; i++)
    {
    	cout << new_array[i] << " ";
    }
    	cout << endl;

    // Free up memory used by the new array
    		delete[] new_array;

    return 0;
}
