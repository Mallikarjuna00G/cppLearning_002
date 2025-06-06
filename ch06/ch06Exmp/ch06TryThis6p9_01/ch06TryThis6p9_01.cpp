// ch06TryThis6p9_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "std_lib_facilities.h"

class Token {  // a very simple user-defined type
public:
    char kind;
    double value;
    Token(char ch) : kind(ch), value(0) {}
    Token(char ch, double val) : kind(ch), value(val) {}
};

Token get_token();  // function to read a token from cin; read characters and compose tokens
double expression();  // deal with + and -
double term();  // deal with *, /, and %
double primary();  // deal with numbers and parentheses

vector<Token> tok;  // we'll put the tokens here

class Token_stream {
public:
    Token get();            // get a Token
    void putback(Token t);  // put a Token back
private:
    bool full{ false };      // is there a Token in the buffer?
    Token buffer = { '0' };           // where we store a 'putback' Token
};

void Token_stream::putback(Token t)
{
    if (full) error("putback() into a full buffer");
    buffer = t;         // copy t to buffer
    full = true;        // buffer is now full
}

Token Token_stream::get()
{
    if (full) {
        full = false;
        return buffer;
    }
    char ch;
    cin >> ch;

    switch (ch) {
    case ';':       // for "print"
    case 'q':       // for "quit"
    case '(':
    case ')':
    case '+':
    case '-':
    case '*':
    case '/':
        return Token{ ch };   // let each character represent itself
    case '.':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    {
        cin.putback(ch);
        double val;
        cin >> val;
        return Token{ '8', val };
    }
    default:
        error("Bad Token");
    }
}

//------------------------------------------------------------------------------

Token_stream ts;      // provides get() and putback()

int main()
{
    try {
        double val = 0;
        while (cin) {
            Token t = ts.get();

            if (t.kind == 'q') break;   // 'q' for "quit"
            if (t.kind == ';')  // ';' for "print now"
                cout << "=" << val << '\n';
            else
                ts.putback(t);
            val = expression();
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
    Token t = ts.get();  // get the next token stream

    while (true) {
        switch (t.kind) {
        case '+':
            left += term();  // evaluate term and add
            t = ts.get();
            break;
        case '-':
            left -= term();  // evaluate Term and subtract
            t = ts.get();
            break;
        default:
            ts.putback(t);  // put back into the token stream
            return left;  // finally: no more + or -; return the answer
        }
    }
}

double term() {
    double left = primary();
    Token t = ts.get();  // get the next Token from the Token stream

    while (true) {
        switch (t.kind) {
        case '*':
            left *= primary();
            t = ts.get();
            break;
        case '/':
        {
            double d = primary();
            if (d == 0)
                error("divide by zero");
            left /= d;
            t = ts.get();
            break;
        }
        default:
            ts.putback(t);
            return left;
        }
    }
}

double primary() {
    Token t = ts.get();
    switch (t.kind) {
    case '(':  // handle '(' expression')'
    {
        double d = expression();
        t = ts.get();
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

Token get_token() {
    char ch;
    cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

    switch (ch) {
        //not yet   case ';':    // for "print"
        //not yet   case 'q':    // for "quit"
    case '(': case ')': case '+': case '-': case '*': case '/':
        return Token(ch);        // let each character represent itself
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
    {
        cin.putback(ch);         // put digit back into the input stream
        double val;
        cin >> val;              // read a floating-point number
        return Token('8', val);   // let '8' represent "a number"
    }
    default:
        error("Bad token");
    }
}