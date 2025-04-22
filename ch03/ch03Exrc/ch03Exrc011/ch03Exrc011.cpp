// ch03Exrc011.cpp : This file contains the 'main' function. Program execution begins and ends there.
// $ dollars

#include "std_lib_facilities.h"

int main()
{
    int pennies, nickels, dimes, quarters, half_dollars, one_dollar_coins;
    cout << "How many pennies do you have?: ";
    cin >> pennies;
    cout << "How many nickels do you have?: ";
    cin >> nickels;
    cout << "How many dimes do you have?: ";
    cin >> dimes;
    cout << "How many quarters do you have?: ";
    cin >> quarters;
    cout << "How many half dollars do you have?: ";
    cin >> half_dollars;
    cout << "How many one dollar coins do you have?: ";
    cin >> one_dollar_coins;

    cout << "-----------------------------------\n";
    string temp = " pennies.";
    cout << "You have " << pennies;
    if (pennies == 1)
        temp = "penny.";
    cout << temp << endl;
    temp = "s.";
    cout << "You have " << nickels << " nickel";
    if (nickels == 1)
        temp = ".";
    cout << temp << endl;
    temp = "s.";
    cout << "You have " << dimes << " dime";
    if (dimes == 1)
        temp = ".";
    cout << temp << endl;
    temp = "s.";
    cout << "You have " << quarters << " quarter";
    if (quarters == 1)
        temp = ".";
    cout << temp << endl;
    temp = "s.";
    cout << "You have " << half_dollars << " half dollar";
    if (half_dollars == 1)
        temp = ".";
    cout << temp << endl;
    temp = "s.";
    cout << "You have " << one_dollar_coins << " one dollar coin";
    if (one_dollar_coins == 1)
        temp = ".";
    cout << temp << endl;
    cout << "-----------------------------------\n";

    double total_cents = pennies + nickels * 5 + dimes * 10 + quarters * 25 + half_dollars * 50 + one_dollar_coins * 100;
    cout << "The value of all of your coins is " << total_cents << " cents.\n";
    cout << "i.e., $" << total_cents / 100 << ".\n";

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
