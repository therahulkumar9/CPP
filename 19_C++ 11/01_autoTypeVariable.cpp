#include <iostream>
using namespace std;
float fun()
{
    return 2.34f;
}
int main()
{

    double d = 12.3;
    int i = 9;

    // auto x = 2 * 5.7 + 'a';  // double
    auto x = 2 * d + i; // Here I don't have to know what is the datatype
    cout << x << '\n';
    auto x1 = fun();
    cout << x1 << '\n';

    // Next

    int x = 10;
    float y = 90.5;
    // From existing variable we can capture its datatype using 'decltype'
    decltype(y) z = // This z should have same datatype as y
        return 0;
}