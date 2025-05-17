// ch06Exmp6p5p3_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "std_lib_facilities.h"

class Token {  // a very simple user-defined type
public:
    char kind;
    double value;
};

Token get_token();  // function to read a token from cin; read characters and compose tokens
double expression();  // deal with + and -
double term();  // deal with *, /, and %
double primary();  // deal with numbers and parentheses

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

double expression() {
    double left = term();  // read and evaluate a term
    Token t = get_token();  // get the next token

    while (true) {
        switch (t.kind) {
        case '+':
            left += term();  // evaluate term and add
            t = get_token();
            break;
        case '-':
            left -= term();  // evaluate Term and subtract
            t = get_token();
            break;
        default:
            return left;  // finally: no more + or -; return the answer
        }
    }
}

double term() {
    double left = primary();
    Token t = get_token();
    while (true) {
        switch (t.kind) {
        case '*':
            left *= primary();
            t = get_token();
            break;
        case '/':
        {
            double d = primary();
            if (d == 0)
                error("divide by zero");
            left /= d;
            t = get_token();
            break;
        }
        default:
            return left;
        }
    }
}