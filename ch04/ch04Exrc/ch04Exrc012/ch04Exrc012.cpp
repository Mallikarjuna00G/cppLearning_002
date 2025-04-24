// ch04Exrc012.cpp : This file contains the 'main' function. Program execution begins and ends there.
// prime numbers

#include "std_lib_facilities.h"

int main()
{
    vector<int> primes = { 2, 3 };
    int max;
    cout << "Enter a maximum number until which you want prime numbers: ";
    cin >> max;

    for (int i = 4; i < max + 1; i++) {
        bool is_prime = true;
        for (int j = 0; j < primes.size() && is_prime == true; j++) {
            if (i % primes[j] == 0 && primes[j] < int(sqrt(i)) + 1)
                is_prime = false;
        }
        if (is_prime) {
            primes.push_back(i);
        }
    }

    cout << "Following are prime numbers between 1 to 100:\n";
    for (int x : primes) {
        cout << x << " ";
    }
}