// ch05Exrc002.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "std_lib_facilities.h"

double ctok(double c) { // converts Celsius to kelvin
    double k = c + 273.15;

    return k;
}

int main()
{
    double c = 0;  // declare input variable
    cin >> c;  // retrive temperature to input variable
    double k = ctok(c);  // convert temperature
    cout << k << '\n';  // print out temperature
}