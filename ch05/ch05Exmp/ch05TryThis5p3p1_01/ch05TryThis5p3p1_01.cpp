// ch05TryThis5p3p1_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// syntax errors

#include "std_lib_facilities.h"

int area(int length, int width);  // calculate area of a rectangle

int main()
{
    int s1 = area(7;  // erro: ) missing
    int s2 = area(7)  // error: ; missing
    Int s3 = area(7);  // error: Int is not a type
    int s4 = are('7);  // error: non-terminated character (' missing)

    return 0;
}

int area(int length, int width) {
    return length * width;
}