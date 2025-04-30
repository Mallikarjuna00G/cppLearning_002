// ch05Exrc012.cpp : This file contains the 'main' function. Program execution begins and ends there.
// guessing game "Buuls and Cows"

#include "std_lib_facilities.h"

int main()
{
    vector<int> nums = { 1, 4, 6, 8 };
    
    cout << "Welcome to \"Bulls and Cows\" game :)\n";
    bool won = false;
    while (!won) {
        cout << "Guess the (4 digit) number (HINT: Each digit shall be unique): ";
        int guess = 0;
        cin >> guess;

        int bulls = 0;
        int cows = 0;
        for (int i = 0; i < 4; ++i) {
            int temp = guess % 10;
            if (temp == nums[nums.size() - 1 - i]) {
                ++bulls;
            }
            else {
                bool okay = true;
                for (int j = 0; j < 4 && okay; j++) {
                    if (nums[j] == temp) {
                        okay = false;
                        cows++;
                    }
                }
            }
            guess /= 10;
        }
        if (bulls == 4) {
            won = true;
        }
        else {
            cout << "That is " << bulls << " bulls and " << cows << " cows\n";
        }
    }
    cout << "Hurray!!! you won\n";

    return 0;
}