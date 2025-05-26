#include <iostream>
using namespace std;

template <class T>
T maxim(T a, T b)
{
    // return a > b ? a : b;
    if (a > b)
        return a;
    else
        return b;
}

// int maxim(int a, int b)
// {
//     return a > b ? a : b;
// }

// float maxim(float a, float b)
// {
//     return a > b ? a : b;
// }

int main()
{
    cout << maxim(4, 6) << endl;
    // cout << maxim(4.6, 5.6); // These are double
    // cout << maxim(4.6f, 5.6); // It give error
    cout << maxim(4.6f, (float)5.6); // resolve it
    cout << endl << maxim(4.6f, 5.6f);
    return 0;
}