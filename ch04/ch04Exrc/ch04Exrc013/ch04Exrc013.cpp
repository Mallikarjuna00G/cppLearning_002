// ch04Exrc013.cpp : This file contains the 'main' function. Program execution begins and ends there.
// prime numbers through “Sieve of Eratosthenes” 

#include "std_lib_facilities.h"

int main()
{
    vector<int> primes = {};
    int max;
    //cout << "Enter a maximum number until which you want prime numbers: ";
    //cin >> max;
    max = 100;

    vector<int> full_list = {};

    for (int i = 2; i < max + 1; i++) {
        full_list.push_back(i);
    }
    
    int list_len = full_list.size();

    for (int i = 0; i < list_len; i++) {
        int current = full_list[i];
        if (current) {
            if (current * current <= max) {
                for (int j = i + 1; j < list_len; j++) {
                    if (full_list[j] % current == 0) {
                        full_list[j] = 0;
                    }
                }
            }
        }
    }

    for (int i = 0; i < list_len; i++) {
        if (full_list[i]) {
            primes.push_back(full_list[i]);
        }
    }

    cout << "Following are prime numbers between 1 to 100:\n";
    for (int x : primes) {
        cout << x << " ";
    }
}