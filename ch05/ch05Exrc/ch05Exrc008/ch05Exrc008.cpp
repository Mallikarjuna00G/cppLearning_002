// ch05Exrc008.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter the number of values you want to sum: ";
    int n;
    cin >> n;
    vector<int> vals = {};
    cout << "Please enter some integers (press '|' to stop): ";
    for (int i; cin >> i;) {
        vals.push_back(i);
    }
    if (n <= vals.size()) {
        int sum = 0;
        cout << "The sum of the first " << n << " numbers ( ";
        for (int i = 0; i < n; ++i) {
            cout << vals[i] << " ";
            sum += vals[i];
        }
        cout << ") is " << sum << ".\n";
    }
    else {
        cerr << "Sorry you only entered " << vals.size() << " numbers.\n";
    }

    return 0;
}