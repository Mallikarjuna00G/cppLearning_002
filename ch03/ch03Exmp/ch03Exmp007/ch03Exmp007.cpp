// ch03Exmp007.cpp : This file contains the 'main' function. Program execution begins and ends there.
// detect repeated words

// Since this contains infinite loop,
// you can terminate this loop by giving the program an end-of-input character (usually referred to
// as end of file). On windows machine, that is Ctrl + Z followed by an Enter (return) and on Unix or Linux machine
// that's Ctrl + D.

/*
Note: In windows, proper way of giving input during execution is to provide all the words in one take that without pressing 
return key to see the output.*/

#include "std_lib_facilities.h"

int main()
{
    string previous = "";  // previous word; initialized with empty string
    string current;
    while (cin >> current) {  // read a stream of words
        if (previous == current)
            cout << "repeated word: " << current << '\n';
        previous = current;
    }
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
