//============================================================================
// Name        : S21_Enum_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :enum class to represent days of the week
//============================================================================



#include <iostream>
#include<string>

enum class DayOfWeek { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

void printToday(DayOfWeek today) {
    switch(today) {
        case DayOfWeek::Monday:
            std::cout << "Today is Monday\n";
            break;
        case DayOfWeek::Tuesday:
            std::cout << "Today is Tuesday\n";
            break;
        case DayOfWeek::Wednesday:
            std::cout << "Today is Wednesday\n";
            break;
        case DayOfWeek::Thursday:
            std::cout << "Today is Thursday\n";
            break;
        case DayOfWeek::Friday:
            std::cout << "Today is Friday\n";
            break;
        case DayOfWeek::Saturday:
            std::cout << "Today is Saturday\n";
            break;
        case DayOfWeek::Sunday:
            std::cout << "Today is Sunday\n";
            break;
        default:
            std::cout << "Invalid day of week\n";
            break;
    }
}

int main() {
    DayOfWeek today = DayOfWeek::Monday;
    printToday(DayOfWeek today);
    return 0;
}
