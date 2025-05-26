#include <iostream>
using namespace std;

int main()
{

    // int A[2][3] = {{2, 4, 6}, {3, 5, 7}};
    int B[2][3] = {2, 4, 6, 3}; // Remain element is zero

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    // using for each loop
    int C[2][3];
    // For Input
    for (auto &x : C)
    {
        for (auto &y : x)
        {
            cin >> y;
        }
        cout << endl;
    }
    // For Display
    for (auto &x : C)
    {
        for (auto &y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}
