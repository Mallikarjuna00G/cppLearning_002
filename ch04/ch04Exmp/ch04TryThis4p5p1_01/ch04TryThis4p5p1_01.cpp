// ch04TryThis4p5p1_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// calculate and print a table of squares 0 - 99 but use repeated addition.

#include "std_lib_facilities.h"

int square(int a) {
    int total = 0;
    for (int i = 0; i < a; i++) {
        total += a;
    }
    return total;
}

int main()
{
    int i = 0;  // start from 0
    while (i < 100) {
        cout << i << '\t' << square(i) << '\n';
        ++i;  // increment i (that is, i becomes i + 1)
    }
}