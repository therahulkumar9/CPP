#include <iostream>
using namespace std;
// Euclidean algorithm
int main()
{

    int m, n;
    cout << "Enter two numbers: ";
    cin >> m >> n;
    while (m != n)
    {
        if (m > n)
        {
            // m = m - n;
            m -= n;
        }
        else
        {
            // n = n - m;
            n -= m;
        }
    }
    cout << "GCD is: " << m;
    return 0;
}