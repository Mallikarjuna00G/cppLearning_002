// ch04Exrc006.cpp : This file contains the 'main' function. Program execution begins and ends there.
// digits and spellings

#include "std_lib_facilities.h"

int main()
{
    cout << "Enter a digit to see its spelling: ";
    vector<string> spellings = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

    int digit;
    cin >> digit;
    cout << "--> " << spellings[digit] << endl;
    
    cout << "Now, enter spell out a digit: ";
    string spelling;
    cin >> spelling;
    for (int i = 0; i < spellings.size(); i++) {
        if (spellings[i] == spelling)
            digit = i;
    }
    cout << "--> " << digit << endl;

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
