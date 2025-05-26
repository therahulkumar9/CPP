#include <iostream>
using namespace std;

int main()
{

    int A[] = {1, 3, 2, 5, 4, 6, 9, 7, 8};
    int sum = 0;

    for (auto x : A)
    {
        sum += x; // 45
        // sum += ++x; // 54
    }
    cout << "Sum of elements: " << sum;


    int B[7] = {1, 2, 4, 8, 16, 32, 64};
    int n=7, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum2 = sum2 + B[i];
    }
    
    cout << endl << "Sum is: " << sum2;
    

    return 0;
}