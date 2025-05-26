#include <iostream>
using namespace std;

int x = 10;
void fun()
{
    static int s = 10;
    s++;
    cout << s << endl;
}
int main()
{
    fun();
    fun();
    return 0;
}
