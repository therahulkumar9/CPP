#include <iostream>
using namespace std;
int main()
{
    int n, i, count = 0;
    cout << "Enter n: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "It's a Prime Number.";
    }
    else
    {
        cout << "It's not a Prime Number.";
    }

    return 0;
}