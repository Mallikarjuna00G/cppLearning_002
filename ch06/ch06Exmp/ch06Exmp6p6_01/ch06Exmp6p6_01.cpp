// ch06Exmp6p6_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    try {
        while (cin) {
            cout << expression() << '\n';
        }
        keep_window_open();
    }
    catch (exception& e) {
        cerr << e.what() << '\n';
        keep_window_open();
        return 1;
    }
    catch (...) {
        cerr << "exception \n";
        keep_window_open();
        return 2;
    }
    
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

double primary() {
    Token t = get_token();
    switch (t.kind) {
    case '(':  // handle '(' expression')'
    {
        double d = expression();
        t = get_token();
        if (t.kind != ')')
            error("')' expected");
        return d;
    }
    case '8':  // we use '8' to represent a number
        return t.value;  // return the number's value
    default:
        error("primary expected");
    }
}