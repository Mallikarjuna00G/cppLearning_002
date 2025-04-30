// ch05Exrc003.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "std_lib_facilities.h"

class Absolute_zero {};

double ctok(double c) { // converts Celsius to kelvin
    double k = c + 273.15;

    return k;
}

int main()
{
    double c = 0;  // declare input variable
    cin >> c;  // retrive temperature to input variable
    try {
        if (c >= -273.15) {
            double k = ctok(c);  // convert temperature
            cout << k << '\n';  // print out temperature
        }
        else {
            throw Absolute_zero{};
        }
    }
    catch (Absolute_zero) {
        cerr << "The input temperature is way below Absolute zero \n\t(the lowest temperature that can be reached).\n";
    }
    catch (...) {
        cerr << "Some error occured\n";
    }
}