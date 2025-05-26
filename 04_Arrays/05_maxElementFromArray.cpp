#include <iostream>
using namespace std;

int main(){

    int A[6] = {56, 403, 498, 302, 250, 453};
    int max = A[0], n = 6;
    for (int i = 1; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
        
    }

    cout << "\nMaximum is: " << max;
    
    return 0;
}