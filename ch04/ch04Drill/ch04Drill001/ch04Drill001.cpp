// ch04Drill001.cpp : This file contains the 'main' function. Program execution begins and ends there.
// while loop to read two ints and print them.

#include "std_lib_facilities.h"

int main()
{
    int n1, n2;
    int count = 0;
    while (cin >> n1) {
        if (count == 0) {
            n2 = n1;
            ++count;
        }
        else if (count == 1) {
            cout << "You entered " << n2 << " and " << n1 << endl;
            count = 0;
        }
    }
    return 0;
}