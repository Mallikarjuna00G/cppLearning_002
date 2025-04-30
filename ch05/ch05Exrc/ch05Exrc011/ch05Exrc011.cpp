// ch05Exrc011.cpp : This file contains the 'main' function. Program execution begins and ends there.
// fibonacci

#include "std_lib_facilities.h"

int add(int a, int b) {
    return a + b;
}

int main()
{
    int sum = 1;
    int prev_sum = 1;

    bool stop = false;
    cout << "1 1 ";
    for (int i = 0; stop == false;++i) {
        int temp = add(sum, prev_sum);
        if (temp < sum) {
            stop = true;
            cout << "\nLargest Fibonacci number that fits in an int is " << sum << endl;
        }
        else {
            cout << temp << " ";
            prev_sum = sum;
            sum = temp;
        }
    }

    return 0;
}