#include <iostream>
using namespace std;

int main()
{

    int A[6] = {56, 43, 498, 302, 250, 453};
    int min = A[0], n = 6;
    for (int i = 1; i < n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }

    cout << "\nMinimum is: " << min;

    return 0;
}