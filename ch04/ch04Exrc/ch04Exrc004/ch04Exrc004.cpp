// ch04Exrc004.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "std_lib_facilities.h"

int main()
{
    cout << "Think of a whole number between 1 to 100 and let me guess...\n\n";

    int max = 100, min = 1, guess, mid = 50;
    int guess_hint = 0;

    char c;
    while (guess_hint < 7) {
        ++guess_hint;

        guess = mid;
        cout << "Is the number you are thinking of less than " << mid << "? (y/n): ";
        cin >> c;
        switch (c) {
        case 'y':
            max = mid - 1;
            mid = (max + min) / 2;
            break;
        case 'n':
            min = mid;
            mid = (max + min) / 2;
            break;
        default:
            --guess_hint;
        }
        if (guess == mid) {
            guess_hint = 7;
        }
    }
    cout << "My guess is " << mid << endl;
    cout << "Am I right? (y/n): ";
    cin >> c;

    switch (c) {
    case 'y':
        cout << "Hurray!!!!\n";
        break;
    case 'n':
        cout << "Alasss!! some other time...\n";
        break;
    }
}