// ch05Exrc005.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "std_lib_facilities.h"

class Absolute_zero {};

double ctok(double c) { // converts Celsius to kelvin
    constexpr double absolute_temp_celsius = -273.15;
    if (c >= absolute_temp_celsius) {
        double k = c + 273.15;
        return k;
    }
    else {
        throw Absolute_zero{};
    }
}

double ktoc(double k) { // converts Celsius to kelvin
    constexpr double absolute_temp_kelvin = 0;
    if (k >= absolute_temp_kelvin) {
        double c = k - 273.15;
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
    cout << "Enter temperature followed by temperature unit ('c' or 'k'): ";
    cin >> temp >> unit;  // retrive temperature to input variable
    try {
        double converted = 0.0;
        switch (unit) {
        case 'c':
            cout << ctok(temp) << "K\n";  // print out temperature   
            break;
        case 'k':
            cout << ktoc(temp) << "C\n";  // print out temperature   
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