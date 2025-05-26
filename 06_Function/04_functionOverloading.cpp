#include <iostream>
using namespace std;

// int sum_int2(int a, int b) - If function overloading is not here
int sum(int a, int b)
{
    return a + b;
}
// float sum_float2(float a, float b)
float sum(float a, float b)
{
    return a + b;
}
// int sum_int3(int a, int b, int c)
int sum(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    cout << sum(10, 5) << endl;
    // cout << sum(12.5, 3.45) << endl; // it give error because i don't use f after value that is use for float, it take is as by default double
    cout << sum(12.5f, 3.45f) << endl;
    cout << sum(2, 4, 6) << endl;

    return 0;
}