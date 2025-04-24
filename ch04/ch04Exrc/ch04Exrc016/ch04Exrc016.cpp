// ch04Exrc016.cpp : This file contains the 'main' function. Program execution begins and ends there.
// mode in a sequence

#include "std_lib_facilities.h"

int main()
{
    double n1;
    double max = 0.0, min = 0.0;
    int count = 0;
    vector<double> allValues = {};

    cout << "HINT: Enter whole numbers ('|' to stop)" << "\n\n";

    while (cin >> n1) {
        ++count;
        allValues.push_back(n1);
        
        if (count == 1) {
            max = n1;
            min = n1;
        }
        else {
            if (n1 > max) {
                max = n1;
            }
            if (n1 < min) {
                min = n1;
            }
        }
    }
    cout << "Totally " << count << " valid values were entered" << endl;
    cout << max << " is the largest among all the values entered." << endl;
    cout << min << " is the smallest among all the values entered." << endl;

    cout << "\nAnyway, following are the valid values you entered:" << endl;

    for (double x : allValues) {
        cout << x << endl;
    }

    sort(allValues);

    cout << "\nAghh, we are just listing the values after sorting:" << endl;

    for (double x : allValues) {
        cout << x << endl;
    }

    vector<double> uniques = { allValues[0] };
    vector<int> repeats = {1};
    for (int i = 1; i < allValues.size(); i++) {
        if (uniques[uniques.size() - 1] == allValues[i]) {
            repeats[repeats.size() - 1]++;
        }
        else {
            uniques.push_back(allValues[i]);
            repeats.push_back(1);
        }
    }
    int mode_index_highest = repeats[0];
    int mode_index = 0;
    for (int i = 1; i < repeats.size(); i++) {
        if (mode_index_highest < repeats[i]) {
            mode_index_highest = repeats[i];
            mode_index = i;
        }
    }

    cout << "Mode in the sequence is " << uniques[mode_index] << " and is repeated " << repeats[mode_index] << " times." << endl;

    return 0;
}