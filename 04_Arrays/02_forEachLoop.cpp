#include <iostream>
using namespace std;

int main()
{

    int A[6] = {9, 8, 4, 0, 2, 4};
    for (auto x : A)
    {
        cout << x << " ";
    }
    cout << endl;
    for (auto x : A)
    {
        cout << ++x << " ";
    }
    
    cout << endl;
    // It will change the array
    for (auto &x : A)
    {
        cout << ++x << " ";
    }
    cout << endl;


    for (auto x : A)
    {
        cout << x << " ";
    }

    return 0;
}