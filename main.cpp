/* 
Created: Viraat Udar
Description: This file is the main program file of the project. 
	This file instantiates an "EditDistance" object to contain the two strings to be compared.

*/

#include <iostream>
#include <string.h>
#include "Edits.cpp"
int main()
{
	std::string s1;
	std::string s2;
	std::cout << "This programs aligns and compares two strings" << std::endl;
	std::cout << "\tPlease enter the first string to be compared, then press enter: ";
	std::cin >> s1;
	std::cout << "\tPlease enter the second string to be compared, then press enter: ";
	std::cin >> s2;
	EditDistance edit;
	edit.findMatrix(s1, s2);

	return 0;
}