// ch04TryThis4p4p2p1_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// while loop
// print alphabets and corresponding ASCII values

#include "std_lib_facilities.h"

int main()
{
    char c = 'a';
    while (c <= 'z') {
        cout << c << "\t" << int(c) << endl;
        ++c;
    }
}