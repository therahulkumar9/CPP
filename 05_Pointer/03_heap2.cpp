#include <iostream>
using namespace std;
int main()
{

    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    // int *p = new int[size];
    int A[size];

    cout << sizeof A << endl;
    cout << sizeof(A) << endl;

    // No any syntax is available ----- to do this we use dynamic allocation or dynamic array
    // size = 35;
    // A[size]; // We can't do this

    cout << sizeof A << endl;
    return 0;
}