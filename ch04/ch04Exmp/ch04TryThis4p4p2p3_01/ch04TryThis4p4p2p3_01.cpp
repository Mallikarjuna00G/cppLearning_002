// ch04TryThis4p4p2p3_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// for loop
// print alphabets and corresponding ASCII values

#include "std_lib_facilities.h"

int main()
{
    for (char c = 'a', d = 'A'; c <= 'z'; ++c, ++d) {
        cout << c << " -- " << int(c) << " | " << d << " -- " << int(d) << endl;
    }
}