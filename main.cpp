/* 
Created: Viraat Udar
Description: This file is the main program file of the project. 
	This file instantiates an "EditDistance" object to contain the two strings to be compared.

*/

#include <iostream>
#include "Edits.cpp"
int main()
{
	EditDistance edit;
	edit.findMatrix("broad", "board");

	return 0;
}