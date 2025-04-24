// ch04Exrc010.cpp : This file contains the 'main' function. Program execution begins and ends there.
// rock, paper, and scissors game

#include "std_lib_facilities.h"

void display_options() {
    cout << "Choices are:\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissor\n";
    cout << "-------------------\n";
    cout << "Your choice?(1/2/3): ";
}

int main()
{
    cout << "Welcome to Rock, Paper, Scissors game\n";
    cout << "Enter any 3 whole numbers: ";

    vector<int> forRand = { 1, 0, 2};
    vector<int> userRand(3);

    for (int i = 0; i <3; i++) {
        int temp;
        cin >> temp;
        userRand[forRand[i]] = temp % 3;
    }
    cout << userRand[0] << userRand[1] << userRand[2] << endl;
    int computer_score = 0;
    int user_score = 0;
    int round_status = 0;

    for (int i = 0; i < 3; i++) {
        cout << "\n-----------------------------\n";
        cout << "Round " << i + 1 << ": \n";
        int computer_choice = userRand[i];
        int user_input;
        display_options();
        cin >> user_input;
        --user_input;

        cout << "You chose " << user_input + 1 << endl;
        cout << "Computer's choice: " << computer_choice + 1 << endl;

        switch (user_input) {
        case 0:
            switch (computer_choice) {
            case 0:
                round_status = 0;
                break;
            case 1:
                computer_score++;
                round_status = 1;
                break;
            case 2:
                user_score++;
                round_status = 2;
                break;
            }
            break;
        case 1:
            switch (computer_choice) {
            case 0:
                user_score++;
                round_status = 2;
                break;
            case 1:
                round_status = 0;
                break;
            case 2:
                computer_score++;
                round_status = 1;
                break;
            }
            break;
        case 2:
            switch (computer_choice) {
            case 0:
                computer_score++;
                round_status = 1;
                break;
            case 1:
                user_score++;
                round_status = 2;
                break;
            case 2:
                round_status = 0;
                break;
            }
            break;
        }

        switch (round_status) {
        case 0:
            cout << "It is a tie\n";
            break;
        case 1:
            cout << "Computer won the round\n";
            break;
        case 2:
            cout << "You won the round\n";
            break;
        }
    }

    if (computer_score > user_score) {
        cout << "Sorry you lost the game!!! :)\n";
    }
    else {
        cout << "Alright!!! you won the game :(\n";
    }

    cout << "------------------------\n";
    cout << "Scoreboard:\n";
    cout << "Me (computer): " << computer_score << endl;
    cout << "You: " << user_score << endl;

    return 0;
}