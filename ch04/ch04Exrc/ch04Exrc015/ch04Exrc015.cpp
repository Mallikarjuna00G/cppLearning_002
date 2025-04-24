// ch04Exrc015.cpp : This file contains the 'main' function. Program execution begins and ends there.
// prime numbers through “Sieve of Eratosthenes” 

#include "std_lib_facilities.h"

int main()
{
    vector<int> primes = { 2, 3 };
    int n;
    cout << "How many prime numbers do you want?: ";
    cin >> n;

    for (int i = 4; primes.size() < n; i++) {
        bool is_prime = true;
        for (int j = 0; j < primes.size() && is_prime == true; j++) {
            if (i % primes[j] == 0 && primes[j] < int(sqrt(i)) + 1)
                is_prime = false;
        }
        if (is_prime) {
            primes.push_back(i);
        }
    }

    cout << "Following are the first "<< n << " prime numbers:\n";
    for (int x : primes) {
        cout << x << " ";
    }
}