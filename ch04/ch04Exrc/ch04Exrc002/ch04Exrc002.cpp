// ch04Exrc002.cpp : This file contains the 'main' function. Program execution begins and ends there.
// median of a sequence

#include "std_lib_facilities.h"

int main()
{
    vector<double> temps;  // temperatures
    for (double temp; cin >> temp;)  // read into temp
        temps.push_back(temp);  // put temp into vector

    // compute mean temperature:
    double sum = 0;
    for (double x : temps) sum += x;
    int len = temps.size();
    cout << "Average temperature: " << sum / len << '\n';

    // compute median temperature:
    sort(temps);  // sort temperatures
    int mid = len / 2;
    double median = temps[mid];
    if (len % 2 == 0) {
        median = (temps[mid - 1] + temps[mid]) / 2;
    }
    cout << "Median temperature: " << median << '\n';

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
