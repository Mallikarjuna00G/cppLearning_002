// ch03TryThis001.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name and age (in years)\n";
    string first_name = "???";  // string variable; ("???" means "don't know the name")
    double age;  // integer variable (0 means "don't know the age")
    cin >> first_name >> age;
    cout << "Hello, " << first_name << "(age " << age * 12 << " months)\n";

    return 0;
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
