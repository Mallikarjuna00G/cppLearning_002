// ch04Exrc005.cpp : This file contains the 'main' function. Program execution begins and ends there.
// simple calculator

#include "std_lib_facilities.h"

int main()
{
    cout << "Enter two floating-point numbers followed by a basic math operator symbol:\n";
    double n1, n2;
    char operation;

    cin >> n1 >> n2 >> operation;

    switch (operation) {
    case '-':
        cout << "The difference is " << n1 - n2 << endl;
        break;
    case '*':
        cout << "The product is " << n1 * n2 << endl;
        break;
    case '/':
        if (n2 == 0)
            cout << "Infinity" << endl;
        else
            cout << "The floating point division result is " << n1 / n2 << endl;
        break;
    default:
        cout << "The sum of given two numbers is " << n1 + n2 << endl;
        break;
    }
}