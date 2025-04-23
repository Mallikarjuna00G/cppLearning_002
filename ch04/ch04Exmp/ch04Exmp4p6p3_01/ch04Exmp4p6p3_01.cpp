// ch04Exmp4p6p3_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// read some temperatures into a vector

#include "std_lib_facilities.h"

int main()
{
    vector<double> temps;  // temperatures
    for (double temp; cin >> temp;)  // read into temp
        temps.push_back(temp);  // put temp into vector

    // compute mean temperature:
    double sum = 0;
    for (double x : temps) sum += x;
    cout << "Average temperature: " << sum / temps.size() << '\n';

    // compute median temperature:
    sort(temps);  // sort temperatures
    cout << "Median temperature: " << temps[temps.size() / 2] << '\n';

    return 0;
}