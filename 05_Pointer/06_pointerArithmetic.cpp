#include <iostream>
using namespace std;

int main()
{

    // int A[5] = {2, 4, 6, 8, 10};
    int A[5]{2, 4, 6, 8, 10};
    int *p = A;
    int *q = &A[3];

    cout << *p << endl;
    p++;
    cout << *p << endl;
    p--;
    cout << *p << endl;



    cout << *p << endl; // 2
    cout << *(p+2) << endl; // 4


    cout << "For q" << endl;
    cout << q << endl;

    // cout << "  ." << endl;
    // cout << "  ." << endl;
    // cout << "  ." << endl;
    // cout << "  ." << endl;
    cout << *q << endl;

    cout << q - p << endl;
    cout << p - q; // here it give -ve value that means p is nearest and q is far
}