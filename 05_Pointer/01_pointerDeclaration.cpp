#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int *p;

    p = &a;
    cout << a << endl; // 10
    cout << &a << endl; // address of a
    cout << p << endl; // address of a
    cout << &p << endl; // address of p
    cout << *p << endl; // 10 - date where p is pointing
    return 0;
}