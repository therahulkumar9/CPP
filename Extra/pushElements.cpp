#include <iostream>
using namespace std;

void push(int x, int A[])
{
    int i = 0;
    if (i < 5)
        A[i++] = x;
}

int main()
{
    int A[5] = {0};
    push(4, A);
    push(89, A);
    for (int x : A)
    {
        cout << x << " ";
    }

    return 0;
}