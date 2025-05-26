#include <iostream> 
using namespace std;

int main(){

    int x, y;
    cout << "Enter 2 numbers: ";
    cin >> x >> y;
    if (x>y)
    {
        cout << "Max is: " << x;
    }
    else
    {
        cout << "Mas is: " << y;
    }
    
    return 0;
}