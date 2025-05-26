#include <iostream> 
using namespace std;

int main(){

    int n, sum = 0, i;
    cout << "Enter n: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum+=i;
        }
        
    }
    cout << "Sum of factors of " << n << " is: " << sum;
    
    return 0;
}