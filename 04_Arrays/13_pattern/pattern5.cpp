#include <iostream>
using namespace std;
// same as pattern 3
int main()
{

    for (int i = 1; i <= 5; i++)
    {

        for (int j = 0; j <= 5; j++)
        {
            if (i <= j)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}