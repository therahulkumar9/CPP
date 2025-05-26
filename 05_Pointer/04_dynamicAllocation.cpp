#include <iostream>
using namespace std;
int main()
{

    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int *p = new int[size];
    p[1] = 13;
    cout << p[1];

    delete[] p;
    p = nullptr; // Set the pointer to nullptr after deallocation

    cout << "Enter new number of elements: ";
    cin >> size;
    p = new int[size];
    cout << p[1];

    delete[] p;
    p = nullptr; // Set the pointer to nullptr after deallocation

    return 0;
}