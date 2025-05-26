#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    for (; i < 10; i++)
    {
        cout << i << " Hello\n";
    }

    int j = 0;
    for (; j < 10;)
    {
        cout << j << " Hello\n";
        j++; // If don't write it - Infinite loop
    }

    int k = 0;
    for (;;)
    {
        cout << k << " Hello\n";
        k++;
        if (k > 10)
        {
            break;
        }
    }

    return 0;
}