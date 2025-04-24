// ch04Exrc003.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  

#include "std_lib_facilities.h"

int main()
{
    vector<double> distances = {};

    cout << "HINT: Enter distances. Press any non-numberical character to stop.\n\n";
    double temp;
    while (cin >> temp) {
        distances.push_back(temp);
    }

    double smallest_distance, largest_distance;
    double sum = 0.0;
    smallest_distance = distances[0];
    largest_distance = smallest_distance;

    for (double x : distances) {
        sum += x;
        if (x > largest_distance)
            largest_distance = x;
        if (x < smallest_distance)
            smallest_distance = x;
    }

    cout << "Total distance is " << sum << "kms\n";
    cout << "Smallest distance between two cities is " << smallest_distance << "kms\n";
    cout << "Largest distance between two cities is " << largest_distance << "kms\n";
    cout << "The mean distance between two neighboring cities is " << sum / distances.size() << "kms\n";

    return 0;
}