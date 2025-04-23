// ch04Exmp4p4p1p1_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
// convert from inches to centimeters or centimeters to inches
// a suffix 'i' or 'c' indicates the unit of the input

#include "std_lib_facilities.h"

int main()
{
    constexpr double cm_per_inch = 2.54;  // number of centimeters in inch
    double length = 1;  // length in inches or centimeters
    char unit = 0;
    cout << "Please enter a length followed by a unit (c or i):\n";
    cin >> length >> unit;

    if (unit == 'i')
        cout << length << "in == " << cm_per_inch * length << "cm\n";
    else
        cout << length << "cm == " << length / cm_per_inch << "in\n";

    cout << endl;
    return 0;
}