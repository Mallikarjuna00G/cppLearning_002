// ch03Drill.cpp : This file contains the 'main' function. Program execution begins and ends there.
// ch03 drill

#include "std_lib_facilities.h"

int main()
{
    cout << "Enter the first name of the person you want to write to: \n";
    string first_name;  // first_name is a variable of type string
    cin >> first_name;  // read character into first_name
    cout << "Enter the first name of a friend of yours: \n";
    string friend_name;
    cin >> friend_name;
    cout << "Type 'm' if that friend is male or else type 'f': ";
    char friend_sex;
    cin >> friend_sex;
    cout << "By the way, what is age of the recipient?: ";
    int age;
    cin >> age;
    
    cout << "Dear " << first_name << ",\n";
    cout << "\tHow are you? I am fine. I miss you.\n\n";
    cout << "I have tried to contact you but your cell was not reachable. Hope everything is fine in your life.\n";
    cout << "Have you seen " << friend_name << " lately? If you see " << friend_name << " please ask ";
    if (friend_sex == 'm')
        cout << "him";
    if (friend_sex == 'f')
        cout << "her";
    cout << " to call me.\n";

    cout << "I hear you just had a birthday and your are " << age << " years old. ";
    if (age <= 0) {
        simple_error("You're kidding!");
    }
    if (age >= 110) {
        simple_error("You're kidding!");
    }
    if (age < 12)
        cout << "Next year you will be " << age + 1 << ".";
    if (age == 17)
        cout << "Next year you will be able to vote.";
    if (age > 70)
        cout << "I hope you are enjoying retirement.\n";

    cout << endl;
    cout << "\nYours sincerely,\n\nMallikarjuna G\n";

    return 0;
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
