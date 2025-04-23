// ch04Drill006.cpp : This file contains the 'main' function. Program execution begins and ends there.
// while loop to read doubles and further.

#include "std_lib_facilities.h"

int main()
{
    double n1;
    double max, min;
    
    cin >> n1;
    cout << "You entered " << n1 << endl;
    max = n1;
    min = n1;
    
    while (cin >> n1) {
        cout << "You entered " << n1 << endl;
        if (n1 > max) {
            max = n1;
            cout << max << " is the largest so far." << endl;
        }
        if (n1 < min) {
            min = n1;
            cout << min << " is the smallest so far." << endl;
        }
        cout << "-----------------------------" << endl;
    }
    return 0;
}