// ch04Drill008.cpp : This file contains the 'main' function. Program execution begins and ends there.
// while loop to read doubles and further.

#include "std_lib_facilities.h"

double convertToCMs(double value, string unit) {
    double retVal = 0.0;

    cout << "You entered " << value << unit << endl;

    if (unit == "m") {
        retVal = value * 100;
    }
    else if (unit == "in") {
        retVal = value * 2.54;
    }
    else if (unit == "ft") {
        retVal = value * 12 * 2.54;
    }
    else {
        retVal = value;
    }

    return retVal;
}

bool unitKnown(string unit) {
    vector<string> units = { "cm", "m", "in", "ft" };
    bool exist = false;

    for (string temp : units) {
        if (temp == unit)
            exist = true;
    }

    return exist;
}

int main()
{
    double n1;
    double max, min;
    int count = 0;
    string unit = "";

    cout << "HINT: Enter floating-point number followed by a length unit (cm, m, in, ft)." << "\n\n";

    while (cin >> n1 >> unit) {
        if (unitKnown(unit) == true) {
            ++count;
            n1 = convertToCMs(n1, unit);

            if (count == 1) {
                max = n1;
                min = n1;
            }
            else {
                if (n1 > max) {
                    max = n1;
                    cout << max << "cms is the largest so far." << endl;
                }
                if (n1 < min) {
                    min = n1;
                    cout << min << "cms is the smallest so far." << endl;
                }
                cout << "-----------------------------" << endl;
            }
        }
        else {
            cout << "You must have entered wrong unit. Try again..." << endl;
        }
    }
    return 0;
}