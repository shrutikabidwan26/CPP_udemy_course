//============================================================================
// Name        : section_7_Diving_In_ass1.cpp

// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : write a C++ program to ask some information from the user and
//				print that back packaged into a nice message
//============================================================================

#include<iostream>

int main()

{
  std::cout<<"where do you live?" << std::endl;
  std::string country;
  std::cin >> country;
  std::cout << "I've heard great things about " <<country << "I'd like to go sometime\n";

  return 0;
}
