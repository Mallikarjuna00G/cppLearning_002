// ch03Exrc009.cpp : This file contains the 'main' function. Program execution begins and ends there.
// spelled out numbers to digits

#include "std_lib_facilities.h"

int main()
{
    cout << "Spell out a number between 0 to 4: ";
    string spelledNumber = "";
    cin >> spelledNumber;
    
    int digit = 5;
    if (spelledNumber == "zero")
        digit =  0;
    if (spelledNumber == "one")
        digit =  1;
    if (spelledNumber == "two")
        digit =  2;
    if (spelledNumber == "three")
        digit =  3;
    if (spelledNumber == "four")
        digit =  4;

    if (digit < 5)
        cout << digit << endl;
    if (digit > 4)
        cout << "Not a number I know" << endl;
    
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
