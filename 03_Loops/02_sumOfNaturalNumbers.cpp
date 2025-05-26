#include <iostream>
using namespace std;

int main()
{

    // Using for loop

    // int n, i, sum = 0;
    // cout << "Enter n: ";
    // cin >> n;

    // for (i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    // cout << "Sum is: " << sum;




    // Using while loop

    // int n, i = 1, sum = 0;
    // cout << "Enter n: ";
    // cin >> n;
    // while (i<=n)
    // {
    //     sum+=i;
    //     i++;
    // }
    // cout << sum;

    // Using do while loop
    int n, i = 1, sum = 0;
    cout << "Enter n: ";
    cin >> n;
    do
    {
        sum+=i;
        i++;
    } while (i<=n);
    
    cout << sum;
    
    return 0;
}