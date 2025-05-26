#include <iostream>
using namespace std;
int g = 5;
void fun()
{

    int g = 10;
    g++; // It increment local varible
    //Block level scope
    {
        int g = 0;
        g++;
        cout << g << endl; // 0 + 1 = 1
    }
    cout << g << endl;
}
 
int main()
{
    cout << g << endl;
    fun();
    cout << g << endl;

    return 0;
}