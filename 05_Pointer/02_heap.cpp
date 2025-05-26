#include <iostream>
using namespace std;
int main()
{

    int *p = new int[5];
    p[0] = 12;
    p[1] = 13;
    p[2] = 14;
    p[3] = 19;
    cout << p[1] << endl;
    // p = NULL; // don't do it before deallocation of heapz

    delete[] p;
    // p = NULL;
    p = nullptr; // in modern c++ use this 
    return 0;
}