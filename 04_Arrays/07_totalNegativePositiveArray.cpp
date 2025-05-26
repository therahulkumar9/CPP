#include <iostream>
using namespace std;

int main()
{

    int A[6] = {-56, 43, 498, 0, -250, 453};

    int n = 6, positive = 0, negative = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] >= 0)
        {
            positive++;
        }
        else negative++;
    }

    cout << "Total Number of Positive elements: " << positive << endl;
    cout << "Total Number of Positive elements: " << negative << endl;

    return 0;
}