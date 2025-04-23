// ch04Exmp4p4p1p1_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// if statement

#include "std_lib_facilities.h"

int main()
{
    int a = 0;
    int b = 0;
    cout << "Please enter two integers\n";
    cin >> a >> b;

    if (a < b)  // condition
        // 1st alternative (taken if condition is true
        cout << "max(" << a << ", " << b << ") is " << b << "\n";
    else
        // 2nd alternative (taken if conditio is false):
        cout << "max(" << a << ", " << b << ") is " << a << "\n";
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
