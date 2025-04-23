// ch04Exmp4p5_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// functions

#include "std_lib_facilities.h"

int square(int x) {  // return the square of x
    return x * x;
}

int main()
{
    cout << square(2) << '\n';  // print 4
    cout << square(10) << '\n';  // print 100
}