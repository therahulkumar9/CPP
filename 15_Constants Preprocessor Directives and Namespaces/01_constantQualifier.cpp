#include <iostream>
using namespace std;
int main()
{
    // // int const x = 10;
    // const int x = 10; // read-only variable
    // // x++;  // error
    // // x = 30;  // error

    // const int x = 10;
    // const int *ptr = &x;
    // // ++(*ptr); // Error
    // cout << *ptr << " " << x << endl;

    // int x = 10;
    // // const int *ptr = &x;
    // int const *ptr = &x; // same
    // // ++(*ptr); // Error
    // cout << *ptr << " " << x << endl;
    // int y = 20;
    // ptr = &y;
    // // ++*ptr; // Error

    // int x = 10;
    // // const int *ptr = &x;
    // int *const ptr = &x; // same
    // ++*ptr; 
    // cout << *ptr << " " << x << endl;
    // int y = 20;
    // // ptr = &y; // Error

    int x = 10;
    // const int *ptr = &x;
    const int *const ptr = &x; // same
    // ++*ptr; // error
    cout << *ptr << " " << x << endl;
    int y = 20;
    // ptr = &y; // Error

    return 0;
}