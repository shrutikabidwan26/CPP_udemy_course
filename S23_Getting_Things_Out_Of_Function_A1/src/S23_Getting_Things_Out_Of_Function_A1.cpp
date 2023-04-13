//============================================================================
// Name        : S23_Getting_Things_Out_Of_Function_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :write a function that checks whether the sum of all elements in an array is even.
//				If the sum is even you would store a true in a bool input parameter called result. If the sum is odd, you would store in a false.
//===========================================================================


#include <iostream>

using namespace std;

void is_sum_even(int data[], unsigned int size, bool& result);

int main()
{
    int data[] = {1, 2, 3, 4, 5, 1};
    unsigned int size = sizeof(data) / sizeof(data[0]);
    bool result;

    is_sum_even(data, size, result);

    if (result)
    {
        cout << "The sum of the elements in the array is even." << endl;
    } else
    {
        cout << "The sum of the elements in the array is odd." << endl;
    }

    return 0;
}

void is_sum_even(int data[], unsigned int size, bool& result)
{
    int sum = 0;
    for (unsigned int i = 0; i < size; i++)
    {
        sum += data[i];
    }
    result = (sum % 2 == 0);
}
