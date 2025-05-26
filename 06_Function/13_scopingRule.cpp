#include <iostream>
using namespace std;

int x = 10;
void fun()
{
    cout << x << endl; // 10
}
int main()
{
    int x = 20;
    {
        int x = 30;
        cout << x << endl; // 30
    }
    cout << x << endl; // 20
    fun();

    // If i want to access global varible
    cout << ::x << endl;
    return 0;
}
