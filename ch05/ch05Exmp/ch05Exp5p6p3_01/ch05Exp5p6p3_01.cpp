// ch05Exp5p6p3_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// exception handling

#include "std_lib_facilities.h"

double some_function() {
	double d = 0;
	cin >> d;
	//if (!cin) throw(runtime_error("couldn't read a double in 'some_function()'"));  // toggle commenting one at a time
	if (!cin) throw(exception("couldn't read a double in 'some_function()'"));  // toggle commenting one at a time
	return d;
}

int main() {
	try {
		some_function();

		return 0;
	}
	catch (runtime_error& e) {
		cerr << "runtime error: " << e.what() << '\n';
		keep_window_open();
		return 1;  // 1 indicates failure
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;  // 1 indicates failure
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;  // 2 indicates failure
	}
}