// ch04Exrc007.cpp : This file contains the 'main' function. Program execution begins and ends there.
// mini calculator

#include "std_lib_facilities.h"

int main()
{
    cout << "Enter two single-digit numbers (either digits or spelled out) followed by a basic math operator symbol:\n";
    vector<string> digits = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
    double n1 = 0, n2 = 0;
    string op1 = "", op2 = "";
    char operation;

    cin >> op1 >> op2 >> operation;

    for (int i = 0; i < digits.size(); ++i) {
        if (op1 == digits[i])
            n1 = i % 10;
        if (op2 == digits[i])
            n2 = i % 10;
    }

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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
