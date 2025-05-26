#include <iostream> 
using namespace std;

int main(){
    int n, m, r, sum = 0;
    cout << "Enter n: ";
    cin >> n;
    m = n;
    while (n>0)
    {
        r = n % 10;
        n = n / 10;
        sum+=r;
    }
    cout << "Sum of digit of " << m << " is: " << sum;
    
    return 0;
}