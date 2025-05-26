#include <iostream>
using namespace std;

int main()
{

    int A[2][3] = {3, 3, 3, 3, 3, 3};
    int B[2][3] = {1, 1, 1, 1, 1, 1};
    int C[2][3];

    // Addition of Matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // C[i][j] = A[i][j] + B[i][j];
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    // Display
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}