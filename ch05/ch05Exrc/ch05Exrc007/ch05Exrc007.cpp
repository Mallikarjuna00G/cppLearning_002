// ch05Exrc007.cpp : This file contains the 'main' function. Program execution begins and ends there.
// quadratic equation

#include "std_lib_facilities.h"

int main()
{
    cout << "Quadratic equation:\n";
    cout << "Enter the co-efficients (a, b, c): ";
    double a, b, c;
    cin >> a >> b >> c;

    double discriminant = sqrt(b * b - 4 * a * c);
    double denominator = 2 * a;
    if (denominator != 0) {
        if (discriminant > 0) {
            cout << "The real roots are " << (-b + discriminant) / denominator << " and " << (-b - discriminant) / denominator << endl;
        }
        else if (discriminant == 0) {
            double temp = (-b) / denominator;
            cout << "There is only one real root and that is " << temp << endl;
        }
        else {
            cout << "The discriminant resulted to be imaginary value.\n";
            cout << "Therefore, there is no real root but two distinct complex conjugate roots.\n";
            double discriminant_internal = sqrt(-(b * b - 4 * a * c));
            cout << "And they are (" << -b << " + i" << discriminant_internal << ") / " << denominator << " and (" << -b << " - i" << discriminant_internal << ") / " << denominator << endl;
        }
    }
    else {
        cout << "Infinity & Infinity\n";
    }
    return 0;
}