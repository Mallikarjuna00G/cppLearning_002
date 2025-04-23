// ch04TryThis4p6p4_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// vector
// bleep the unwanted words

#include "std_lib_facilities.h"

int main()
{
    vector<string> dislikes = { "Broccoli", "insects" };
    vector<string> words;

    for (string temp; cin >> temp;)
        words.push_back(temp);

    for (string x : words) {
        bool bleep_exist = false;
        for (string y : dislikes) {
            if (x == y)
                bleep_exist = true;
        }
        if (bleep_exist == true)
            cout << "BLEEP" << endl;
        else
            cout << x << endl;
    }

    return 0;
}

// input: I am fine. But I do not like Broccoli and I am scared of insects.