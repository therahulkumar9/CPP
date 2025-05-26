#include <iostream>
using namespace std;

int maximum(int x, int y, int z)
{

    if (x > y && x > z)
        return x;
    else if (y > z)
        return y;
    else
        return z;
}

int main()
{

    int a = 10, b = 39, c = 50;
    int result;
    result = maximum(a, b, c);
    cout << result << endl;
    return 0;
}