
// ch04Exmp4p6p4_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// simple dictionary: list of sorted words

#include "std_lib_facilities.h"

int main()
{
    vector<string> words;
    for (string temp; cin >> temp;)  // read whitespace-separated words
        words.push_back(temp);  // put into vector
    cout << "Number of words: " << words.size() << '\n';

    sort(words);  // sort the words

    for (int i = 0; i < words.size(); ++i)
        if (i == 0 || words[i - 1] != words[i])  // is this a new word?
            cout << words[i] << endl;
}