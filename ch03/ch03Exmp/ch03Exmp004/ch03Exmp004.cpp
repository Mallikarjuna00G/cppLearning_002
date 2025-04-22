// ch03Exmp004.cpp : This file contains the 'main' function. Program execution begins and ends there.
// simple program to exercise operators

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter a floating-point value: ";
    double n;
    cin >> n;
    cout << "n == " << n
        << "\nn + 1 == " << n + 1
        << "\nthree times n == " << 3 * n
        << "\ntwice n == " << n + n
        << "\nn squared == " << n * n
        << "\nhalf of n == " << n / 2
        << "\nsquare root of n == " << sqrt(n)
        << '\n';  // name for newline ("end of line") in output
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
