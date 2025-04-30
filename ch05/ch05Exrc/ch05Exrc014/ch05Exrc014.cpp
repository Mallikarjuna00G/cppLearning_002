// ch05Exrc014.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "std_lib_facilities.h"

int main()
{
    vector<int> day_of_the_week_values = { 0, 0, 0, 0, 0, 0, 0 };
    vector<string> days_of_the_week = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int num_of_rejected_values = 0;

    bool keep_running = true;
    while (keep_running) {
        cout << "Enter day-of-the-week followed by a value (with space in between); '??? 0' to stop: \n";
        string day;
        int value;
        cin >> day >> value;
        if (day == "???" && value == 0) {
            keep_running = false;
        }
        else {
            if (day == days_of_the_week[0] || day == "Sun" || day == "sun" || day == "sunday") {
                day_of_the_week_values[0] += value;
            }
            else if (day == days_of_the_week[1] || day == "Mon" || day == "mon" || day == "monday") {
                day_of_the_week_values[1] += value;
            }
            else if (day == days_of_the_week[2] || day == "Tue" || day == "tue" || day == "tuesday") {
                day_of_the_week_values[2] += value;
            }
            else if (day == days_of_the_week[3] || day == "Wed" || day == "wed" || day == "wednesday") {
                day_of_the_week_values[3] += value;
            }
            else if (day == days_of_the_week[4] || day == "Thu" || day == "thu" || day == "thursday") {
                day_of_the_week_values[4] += value;
            }
            else if (day == days_of_the_week[5] || day == "Fri" || day == "fri" || day == "friday") {
                day_of_the_week_values[5] += value;
            }
            else if (day == days_of_the_week[6] || day == "Sat" || day == "sat" || day == "saturday") {
                day_of_the_week_values[6] += value;
            }
            else {
                num_of_rejected_values++;
            }
        }

    }

    cout << "-------------------------------------\n";
    for (int i = 0; i < days_of_the_week.size(); i++) {
        cout << days_of_the_week[i] << "     |  " << day_of_the_week_values[i] << endl;
    }
    cout << "-------------------------------------\n";
    cout << "Number of rejected values: " << num_of_rejected_values << endl;

    return 0;
}