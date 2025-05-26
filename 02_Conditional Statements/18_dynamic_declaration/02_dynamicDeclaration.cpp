#include <iostream>
using namespace std;

int main()
{

    int a = 10, b = 5;
    if (true)
    {
        int c = a + b;
        cout << c << endl;
    }
    // The life fo c variable has finished  here at the end of this if block
    // cout << c << endl;

    int x = a + b;
    if (x > 10)
    {
        /* code */
    }

    // Empty block - Here x is only visible in this block
    {
        int x = a + b;
        if (x > 10)
        {
            /* code */
        }
    }


    // Here it is also limited only to this block
    if (int y = 15; y > 10)
    {
        cout << "y is greater than 10";
    }

    return 0;
}