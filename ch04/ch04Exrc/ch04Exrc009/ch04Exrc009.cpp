// ch04Exrc009.cpp : This file contains the 'main' function. Program execution begins and ends there.
// chess and rice

#include "std_lib_facilities.h"

int twoPn(int n) {
    int retVal = 1;
    for (int i = 0; i < n; i++) {
        retVal *= 2;
    }

    return retVal;
}

double twoPn_d(int n) {
    double retVal = 1;
    for (int i = 0; i < n; i++) {
        retVal *= 2;
    }

    return retVal;
}

int main()
{
    cout << "square\t|  (int)\t|  (double)" << endl;
    cout << "-----------------------------------------\n";
    for (int i = 1; i < 65; i++) {
        cout << i << "\t|  " << twoPn(i) << "\t\t|  " << twoPn_d(i) << endl;
    }
    cout << "-----------------------------------------\n";
    cout << "square\t|  (int)\t|  (double)" << endl;

    cout << "\nHINT: look for the first largest positive number from the top \nto get the answers.\n";

    return 0;
}