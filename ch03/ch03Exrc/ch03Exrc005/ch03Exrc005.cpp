// ch03Exrc005.cpp : This file contains the 'main' function. Program execution begins and ends there.
// multiple basic operations on two floating-point numbers.

#include "std_lib_facilities.h"

int main()
{
    cout << "Enter two floating-point numbers: ";
    double val1 = 0, val2 = 0;
    cin >> val1 >> val2;
    if (val1 == val2)
        cout << "Both the numbers are equal\n";
    if (val1 < val2)
        cout << val1 << " is smaller than " << val2 << endl;
    if (val2 < val1)
        cout << val2 << " is smaller than " << val1 << endl;
    cout << "Sum of the given numbers: " << val1 + val2 << endl;
    cout << "Difference of the given numbers: " << val1 - val2 << endl;
    cout << "Product of the given numbers: " << val1 * val2 << endl;

    // Finding gcd to find the ratio of given two numbers
    cout << "**Note**: Can't use modulo operator on floating point numbers.\nSo converting the given numbers to integers before finding the ratio.\n";
    int t1 = val1, t2 = val2;
    int remainder = t1 % t2;
    while (remainder != 0) {
        t1 = t2;
        t2 = remainder;
        remainder = t1 % t2;
    }
    cout << "Ratio of the given two numbers: " << val1 / t2 << ":" << val2 / t2 << " as gcd is " << t2 << endl;
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
