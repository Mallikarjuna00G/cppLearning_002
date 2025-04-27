// ch05Exmp5p6p4_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// error handling, narrowing errors

#include "std_lib_facilities.h";

int main()
{
    int x1 = narrow_cast<int>(2.9);  // throws
    int x2 = narrow_cast<int>(2.0);  // OK
    char c1 = narrow_cast<char>(1066);  // throws
    char c2 = narrow_cast<char>(85);  // OK

    return 0;
}