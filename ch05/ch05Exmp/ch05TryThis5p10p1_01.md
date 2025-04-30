
```cpp
int area(int length, int width)
// calculate area of a rectangle;
// pre-conditions: length and width are positive
// post-condition: returns a positive value that is the area
{
    if (length<=0 || width <=0)
        error("area() pre-condition");
    int a = length*width;
    if (a<=0)
        error("area() post-condition");
    return a;
}
```

Here's a pair of values that would satisfy the pre-condition `(length > 0 and width > 0)` but could cause the post-condition `(a > 0)` to fail due to integer overflow, depending on the limits of the `int` data type on your system:

Let's assume a 32-bit signed integer, which typically has a maximum value around `2,147,483,647`.

Consider these values:

`length = 2147483647` (the maximum positive value for a 32-bit `signed int`)  
`width = 2`