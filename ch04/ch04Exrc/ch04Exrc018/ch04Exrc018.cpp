// ch04Exrc018.cpp : This file contains the 'main' function. Program execution begins and ends there.
// quadratic equation

#include "std_lib_facilities.h"

int main()
{
    cout << "Quadratic equation:\n\n";
    double x1, x2;
    double a, b, c;

    cout << "Enter the co-efficients a, b, and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Infinity!!!!\n";
    }
    else {
        double discriminant = sqrt(b * b - 4 * a * c);
        x1 = (-b + discriminant) / (2 * a);
        x2 = (-b - discriminant) / (2 * a);

        cout << "The roots of zeros for given quadratic equation are " << x1 << " and " << x2 << endl;
    }

    return 0;
}