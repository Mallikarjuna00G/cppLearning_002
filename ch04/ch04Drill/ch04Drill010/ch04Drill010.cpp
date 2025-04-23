// ch04Drill010.cpp : This file contains the 'main' function. Program execution begins and ends there.
// while loop to read doubles and further.

#include "std_lib_facilities.h"

double convertTomts(double value, string unit) {
    double retVal = 0.0;

    cout << "You entered " << value << unit;

    if (unit == "cm") {
        retVal = value / 100;
    }
    else if (unit == "in") {
        retVal = value * 2.54 / 100;
    }
    else if (unit == "ft") {
        retVal = value * 12 * 2.54 / 100;
    }
    else {
        retVal = value;
    }

    cout << " i.e., " << retVal << "m." << endl;

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
    double n1, total = 0.0;
    double max = 0.0, min = 0.0;
    int count = 0;
    string unit = "";
    vector<double> allValues = {};

    cout << "HINT: Enter floating-point number followed by a length unit (cm, m, in, ft)." << "\n\n";

    while (cin >> n1 >> unit) {
        if (unitKnown(unit) == true) {
            ++count;
            n1 = convertTomts(n1, unit);
            allValues.push_back(n1);
            total += n1;

            if (count == 1) {
                max = n1;
                min = n1;
            }
            else {
                if (n1 > max) {
                    max = n1;
                    cout << max << "m is the largest so far." << endl;
                }
                if (n1 < min) {
                    min = n1;
                    cout << min << "m is the smallest so far." << endl;
                }
                cout << "-----------------------------" << endl;
            }
        }
        else {
            cout << "You must have entered a wrong unit. Try again..." << endl;
        }
    }
    cout << "Totally " << count << " valid values were entered" << endl;
    cout << "And the total of all the valid values entered is " << total << "m." << endl;
    cout << max << "m is the largest among all the values entered." << endl;
    cout << min << "m is the smallest among all the values entered." << endl;

    cout << "\nAnyway, following are the valid values you entered (displyed in m):" << endl;

    for (double x : allValues) {
        cout << x << endl;
    }

    return 0;
}