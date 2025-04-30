// ch05Exrc006.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "std_lib_facilities.h"

class Absolute_zero {};

double ctof(double c) { // converts Celsius to fahrenheit
    constexpr double absolute_temp_celsius = -273.15;
    if (c >= absolute_temp_celsius) {
        double f = c * 9.0 / 5 + 32;
        return f;
    }
    else {
        throw Absolute_zero{};
    }
}

double ftoc(double f) { // converts Celsius to fahrenheit
    constexpr double absolute_temp_fahrenheit = -459.67;
    if (f >= absolute_temp_fahrenheit) {
        double c = (f - 32) * 5.0 / 9;
        return c;
    }
    else {
        throw Absolute_zero{};
    }
}

int main()
{
    double temp = 0;  // declare input variable
    char unit = 'c';
    cout << "Enter temperature followed by temperature unit ('c' or 'f'): ";
    cin >> temp >> unit;  // retrive temperature to input variable
    try {
        double converted = 0.0;
        switch (unit) {
        case 'c':
            cout << ctof(temp) << "F\n";  // print out temperature   
            break;
        case 'f':
            cout << ftoc(temp) << "C\n";  // print out temperature   
            break;
        default:
            throw("Unknown termperature unit\n");
            break;
        }
    }
    catch (Absolute_zero) {
        cerr << "The input temperature is way below Absolute zero \n\t(the lowest temperature that can be reached i.e., -273.15 degree celsius or 0K).\n";
    }
    catch (...) {
        cerr << "Some error occured\n";
    }
}