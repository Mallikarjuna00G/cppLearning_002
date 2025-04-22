// ch03TryThis004.cpp : This file contains the 'main' function. Program execution begins and ends there.
// safe and unsafe conversions between types

#include "std_lib_facilities.h"

int main()
{
    double d = 0;
    while (cin >> d) {  // repeat the statements below
        // as long as we type in numbers
        // To break the loop in Windows: press Ctrl + Z followed by Enter key
        // To break the loop in Linux: press Ctrl + D

        int i = d;  // try tow squeeze double into an int
        char c = i;  // try to squeeze an int into a char
        int i2 = c;  // get the integer value of the character
        cout << "d == " << d  // the original double
            << " i == " << i  // converted to int
            << " i2 == " << i2  // int value of char
            << " char(" << c << ")\n";  // the char
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
