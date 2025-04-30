// ch05Exrc013.cpp : This file contains the 'main' function. Program execution begins and ends there.
// guessing game "Bulls and Cows"

#include "std_lib_facilities.h"

void play_game(vector<int> nums) {
    
}

int main()
{
    cout << "Welcome to \"Bulls and Cows\" game :)\n";
    char continuer = 'y';

    while (continuer == 'y') {
        vector<int> nums;
        int n;
        cout << "Enter any random integer: ";
        cin >> n;
        seed_randint(randint(n) + randint(n));  // intentionally made more complex
        
        nums.push_back(randint(10) % 10);

        for (int i = 1; nums.size() < 4; i++) {
            int temp = randint(10) % 10;
            bool duplicate = false;
            for (int j = 0; j < nums.size() && !duplicate; j++) {
                if (temp == nums[j]) {
                    duplicate = true;
                }
            }

            if (!duplicate) {
                nums.push_back(temp);
            }
        }

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

        cout << "-----------------------------------------\n";

        cout << "Would you like to play again? (y/n): ";
        cin >> continuer;
    }

    return 0;
}