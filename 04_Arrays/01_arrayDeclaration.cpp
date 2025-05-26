#include <iostream>
using namespace std;

int main()
{

    // int A[5]={3, 4, 10, 12, 5};
    // int A[5]={3, 4};
    // int A[5]={0};
    // int A[6]={3, 4, 10, 12, 5, 6};
    int A[] = {3, 4, 10, 12, 5, 6};

    // for (int i = 0; i < 6; i++)
    // {
    //     cout << A[i] << endl;
    // }

    // for each loop - work according to the size of the array
    for (int x : A)
        cout << x << endl;

    float B[] = {2.5f, 5.6f, 9, 8, 7};

    for (int x : B) // truncating integer part of float because here we use int x
        cout << x << endl;

    for (float x : B)
        cout << x << endl;

    for (auto x : B)
        cout << x << endl;

    char C[] = {'A', 66 ,'C', 68};

    for (char x : C)
        cout << x << endl;

    for (int x : C)
        cout << x << endl;
    return 0;
}