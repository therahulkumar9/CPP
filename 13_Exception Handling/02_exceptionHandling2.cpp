#include <iostream>
using namespace std;
int main()
{

    int x = 10, y = 2, z;
    // int x = 10, y = 0, z;
    try
    {
        if (y == 0)
            throw 1;
        z = x / y;
        cout << z << endl;
    }
    catch (int e)
    {
        cout << "Division by Zero." << " Error code: " << e << endl;
    }
    cout << "Bye";
    return 0;
}