// ch05Exmp5p6p2_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// exception handling, range error

#include "std_lib_facilities.h"

int main()
{
    try {
        vector<int> v;  // a vector of ints
        for (int x; cin >> x;)
            v.push_back(x);  // set values
        for (int i = 0; i <= v.size(); ++i)  // print values
            cout << "v[" << i << "] == " << v[i] << '\n';
    }
    catch (out_of_range) {
        cerr << "Oops! Range error\n";
        return 1;
    }
    catch (...) {  // catch all other exception
        cerr << "Exception: something went wrong\n";
        return 2;
    }
}