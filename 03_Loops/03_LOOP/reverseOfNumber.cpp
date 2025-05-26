#include <iostream>
using namespace std;

int main(){

    int n, m, r, rev=0;
    cout << "Enter n: ";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
        // rev *= 10;
        // rev += r;
    }

    cout << "Reverse of " << m << " is: " << rev;
    
}