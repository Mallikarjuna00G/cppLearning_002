// ch05TryThis5p6p3_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// exception handling

#include "std_lib_facilities.h"

double some_function() {
	double d = 0;
	cin >> d;
	if (!cin) error("couldn't read a double in 'some_function()'");
	return d;
}

int main() {
	some_function();
	return 0;
}