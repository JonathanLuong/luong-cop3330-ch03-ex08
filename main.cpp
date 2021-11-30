/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jonathan Luong
 */

#include "std_lib_facilities.h"

int main()
{
	int num = 0;
    
	cout << "Enter integer number\n";
	cin >> num;

	if (num % 2 == 0) {
		cout << "The value " << num << " is an even number.\n";
	}
	else {
		cout << "The value " << num << " is an odd number.\n";
	}

	return 0;
}