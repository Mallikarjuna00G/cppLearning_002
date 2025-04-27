// ch05Exmp5p6p1_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// error handling, bad arguments, intro to try-catch

#include "std_lib_facilities.h"

class Bad_area {};  // a type typically for reporting errors from area()

// calculate area of a rectangle;
// return -1 to indicate a bad argument
int area(int length, int width) {
    if (length <= 0 || width <= 0)
        throw Bad_area{};
    return length * width;
}

int framed_area(int x, int y) {  // calculate area within frame
    constexpr int frame_width = 2;
    return area(x - frame_width, y - frame_width);
}

int f(int x, int y, int z) {
    try {
        int area1 = area(x, y);
        int area2 = framed_area(1, z);
        int area3 = framed_area(y, z);
        double ratio = double(area1) / area3;
        
        return ratio;
    }
    catch (Bad_area) {
        cout << "Oops! bad arguments to area()\n";
    }
}

int main()
{
    f(1, 1, 1);
    f(-2, -4, 3);
    f(5, 8, 9);

    return 0;
}