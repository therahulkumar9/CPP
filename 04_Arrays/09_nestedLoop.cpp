#include <iostream>
using namespace std;

int main()
{

    // i is for rows and j is for columns
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "(" << i << "," << j << ")" << "  ";
        }
        cout << endl;
    }

    return 0;
}