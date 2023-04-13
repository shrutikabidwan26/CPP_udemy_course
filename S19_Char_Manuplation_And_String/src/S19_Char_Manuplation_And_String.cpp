//============================================================================
// Name        : S19_Char_Manuplation_And_String.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : figure out how many vowels and how many consonants there are in the string.
//============================================================================

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char message[] = "John was 8 years old at the time.";
    int vowels = 0, consonants = 0;
    int len = strlen(message);

    for(int i=0; i<len; i++)
    {
        if(isalpha(message[i]))
        {
            if(message[i]=='a' || message[i]=='e' || message[i]=='i' || message[i]=='o' || message[i]=='u' ||
            message[i]=='A' || message[i]=='E' || message[i]=='I' || message[i]=='O' || message[i]=='U')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "The string contains " << vowels << " vowels and " << consonants << " consonants." << endl;

    return 0;
}
