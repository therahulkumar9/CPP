#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0, i;
    cout << "Enter n: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == 2 * n)
    {
        cout << "Your number is a Perfect number.";
    }
    else
    {
        cout << "Your number is not a Perfect number.";
    }

    return 0;
}