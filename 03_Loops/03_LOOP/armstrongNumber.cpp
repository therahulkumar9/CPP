#include <iostream>
using namespace std;
int main()
{
    // 153, 371
    int n, m, r, sum = 0;
    cout << "Enter a three-digit integer: ";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum += r * r * r;
    }

    if (m == sum)
        cout << m << " is an Armstrong number.";
    else
        cout << m << " is not an Armstrong number.";

    return 0;
}