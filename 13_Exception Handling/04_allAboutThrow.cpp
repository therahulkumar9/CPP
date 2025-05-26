#include <iostream>
using namespace std;
int division(int x, int y) 
{
    if (y == 0)
        throw string("Division by 0");
        // throw 1.5;
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
    catch (string e)
    // catch (double e)
    {
        cout << "Division by zero" << " Error code: " << e << endl;
    }
    cout << "Bye";
    return 0;
}
