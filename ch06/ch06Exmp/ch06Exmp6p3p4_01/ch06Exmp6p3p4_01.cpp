// ch06Exmp6p3p4_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "std_lib_facilities.h"

class Token {  // a very simple user-defined type
public:
    char kind;
    double value;
};

Token get_token();  // function to read a token from cin

vector<Token> tok;  // we'll put the tokens here

int main()
{
    while (cin) {
        Token t = get_token();
        tok.push_back(t);
    }
    cout << "Please enter expression (we can handle +, -, *, and /)\n";
    cout << "add and x to end expression (e.g., 1+2*3x): ";
    int lval = 0;
    int rval;
    cin >> lval;  // read left most operand
    if (!cin)
        error("no first operand");
    for (char op; cin >> op;) { // read operator and right-hand operand repeatedly
        if (op != 'x')
            cin >> rval;
        if (!cin)
            error("no second operand");
        switch (op) {
        case '+':
            lval += rval;  // add: lval = lval + rval
            break;
        case '-':
            lval -= rval;  // subtract: lval = lval - rval
            break;
        case '*':
            lval *= rval;  // multiply: lval = lval * rval
            break;
        case '/':
            lval /= rval;  // divide: lval = lval / rval
            break;
        default:  // not another operator: print result
            cout << "Result: " << lval << '\n';
            keep_window_open();
            return 0;
        }
    }
    error("bad expression");

    return 0;
}