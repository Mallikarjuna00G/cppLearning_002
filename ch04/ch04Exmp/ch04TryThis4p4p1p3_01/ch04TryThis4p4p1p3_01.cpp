// ch04TryThis4p4p1p3_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// currency conversion using switch statements

#include "std_lib_facilities.h"

int main()
{
    double amount = 0.0;
    char unit = ' ';
    cout << "Please enter an amount followed by a unit (y, k, p): ";
    cin >> amount >> unit;

    switch (unit) {
        case 'y':
            cout << amount << "y == $" << amount * 0.0071 << endl;
            break;
        case 'k':
            cout << amount << "k == $" << amount * 0.092 << endl;
            break;
        case 'p':
            cout << amount << "p == $" << amount * 1.24 << endl;
            break;
        default:
            cout << "Sorry, I do not know that currency unit\n";
            break;
    }

    return 0;
}