// ch04Exrc008.cpp : This file contains the 'main' function. Program execution begins and ends there.
// chess and rice

#include "std_lib_facilities.h"

int twoPn(int n) {
    int retVal = 1;
    for (int i = 0; i < n; i++) {
        retVal *= 2;
    }

    return retVal;
}

int main()
{
    vector<int> rice_grains = {};
    vector<int> findings = {};
    vector<int> targets = {1000, 1000000, 1000000000};
    int total = 0;

    for (int i = 1; i < 65; i++) {
        int temp = twoPn(i);
        rice_grains.push_back(temp);
        total += temp;

        if (total >= targets[0])
            if (findings.size() == 0)
                findings.push_back(i);
        if (total >= targets[1])
            if (findings.size() == 1)
                findings.push_back(i);
        if (total >= targets[2])
            if (findings.size() == 2)
                findings.push_back(i);
    }

    for (int i = 0; i < targets.size(); i++) {
        cout << findings[i] << " squares for at least " << targets[i] << " grains of rice.\n";
    }

    return 0;
}