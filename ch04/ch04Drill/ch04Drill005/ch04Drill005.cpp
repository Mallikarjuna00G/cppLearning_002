// ch04Drill005.cpp : This file contains the 'main' function. Program execution begins and ends there.
// while loop to read two ints and print them.

#include "std_lib_facilities.h"

int main()
{
    double n1, n2;
    int count = 0;
    double max, min;
    while (cin >> n1) {
        if (count == 0) {
            n2 = n1;
            ++count;
        }
        else if (count == 1) {
            cout << "You entered " << n2 << " and " << n1 << endl;
            if (n1 == n2) {
                cout << "The numbers are equal." << endl;
            }
            else {
                if (n1 > n2) {
                    max = n1;
                    min = n2;
                }
                else {
                    max = n2;
                    min = n1;
                }
                cout << "The smaller value is: " << min << endl;
                cout << "The larger value is: " << max << endl;

                if (max - min < 0.01) {
                    cout << "The numbers are almost equal." << endl;
                }
            }
            cout << "-----------------------------" << endl;
            count = 0;
        }
    }
    return 0;
}