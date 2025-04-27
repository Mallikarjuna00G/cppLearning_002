// ch05TryThis5p5p3_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// error handling

#include "std_lib_facilities.h"

// calculate area of a rectangle;
// return -1 to indicate a bad argument
int area(int length, int width) {
    if (length <= 0 || width <= 0) return -1;
    return length * width;
}

int framed_area(int x, int y) {  // calculate area within frame
    constexpr int frame_width = 2;
    return area(x - frame_width, y - frame_width);
}

int f(int x, int y, int z) {
    int area1 = area(x, y);
    if (area1 <= 0) error("non-positive area");
    int area2 = framed_area(1, z);
    if (area2 <= 0) error("non-positive area() argument called by framed_area()");
    int area3 = framed_area(y, z);
    if (area3 <= 0) error("non-positive area() argument called by framed_area()");
    double ratio = double(area1) / area3;
    cout << "The ratio is " << ratio << endl;

    return ratio;
}

int main()
{
    f(1, 1, 1);
    f(-2, -4, 3);
    f(5, 8, 9);

    return 0;
}