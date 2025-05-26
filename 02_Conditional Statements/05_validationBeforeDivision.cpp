#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b == 0)
    {
        cout << "Division by Zero is not possible.";
    }
    else
    {
        c = a / b;
        cout << "Result is: " << c;
    }
    
    return 0;
}