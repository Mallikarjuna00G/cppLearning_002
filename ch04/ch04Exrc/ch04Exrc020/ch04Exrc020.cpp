// ch04Exrc020.cpp : This file contains the 'main' function. Program execution begins and ends there.
// name-and-value pairs

#include "std_lib_facilities.h"

int main()
{
    cout << "Enter names and corresponding scores:\n";
    cout << "HINT: Enter 'NoName 0' to stop the input\n";

    vector<string> names;
    vector<int> scores;

    bool in_progress = true;
    string name;
    int score;

    while (in_progress) {
        cin >> name >> score;
        if (name == "NoName" && score == 0) {
            in_progress = false;
        }
        else {
            bool name_exists = false;
            for (string x : names) {
                if (x == name) {
                    in_progress = false;
                    name_exists = true;
                    cout << "Duplications detected!! Will not receive inputs further." << endl;
                }
            }
            if (!name_exists) {
                names.push_back(name);
                scores.push_back(score);
                name_exists = false;
            }
        }
    }

    cout << "\nNames\t\t| Scores\n";
    cout << "---------------------------------------------\n";
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << "\t\t| " << scores[i] << endl;
    }
    cout << "---------------------------------------------\n";

    string filter_name;
    cout << "Enter name to filter: ";
    cin >> filter_name;

    bool entry_found = false;

    for (int i = 0; i < names.size() && entry_found == false; i++) {
        if (filter_name == names[i]) {
            entry_found = true;
            cout << "score: " << scores[i] << endl;
        }
    }

    if (!entry_found) {
        cout << "Name not found\n";
    }

    return 0;
}