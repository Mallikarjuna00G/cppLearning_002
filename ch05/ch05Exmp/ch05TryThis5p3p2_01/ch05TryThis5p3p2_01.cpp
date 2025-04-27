// ch05TryThis5p3p2_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// syntax errors

#include "std_lib_facilities.h"

int area(int length, int width);  // calculate area of a rectangle

int main()
{
    int x0 = arena(7);  // error: undeclared function
    int x1 = area(7);  // error: wrong number of arguments
    int x2 = area("seven", 2);  // error: 1st argument has a wrong type
}

int area(int length, int width) {
    return length * width;
}