#include <iostream>
using namespace std;
class MyException:public exception {
public:
int k = 30;
};
int division(int x, int y)
{
    if (y == 0)
        throw MyException();
    return x / y;
}
int main()
{

    int a = 10, b = 0, c;
    try
    {
        c = division(a, b);
        cout << c << endl;
    }
    catch (MyException e)
    {
        cout << "Division by zero " <<  e.k << endl;
    }
    cout << "Bye";
    return 0;
}
