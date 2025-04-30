// ch05Exrc010.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "std_lib_facilities.h"

class overflow {};

int main()
{
    cout << "Please enter the number of values you want to sum: ";
    int n;
    cin >> n;
    vector<double> vals = {};
    cout << "Please enter some integers (press '|' to stop): ";
    for (double i; cin >> i;) {
        vals.push_back(i);
    }
    try {
        if (n <= vals.size()) {
            bool overflow_occured = false;
            double sum = 0;
            double prev_sum = 0;
            for (int i = 0; i < n; ++i) {
                prev_sum = sum;
                sum += vals[i];
                if (prev_sum > sum) {
                    throw overflow{};
                }
            }
            cout << "The sum of the first " << n << " numbers ( ";
            for (int i = 0; i < n; ++i) {
                cout << vals[i] << " ";
            }
            cout << ") is " << sum << ".\n";
        }
        else {
            cerr << "Sorry you only entered " << vals.size() << " numbers.\n";
        }
    }
    catch (overflow) {
        cerr << "ERROR: Overflow occured!! Cannot represent the sum in int variable.";
    }
    catch (...) {
        cerr << "ERROR: Some error occured!!!";
    }

    return 0;
}