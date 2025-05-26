#include <iostream>
using namespace std;

int main(){
    float billAmount, discount=0.0, discoutedAmount;
    cout << "Enter bill amount: ";
    cin >> billAmount;
 
    if (billAmount >= 100 && billAmount < 500)  
    {
        discount = billAmount * 10/100;
    }
    else if (billAmount >= 500)
    {
        discount = billAmount * 20 / 100;
    }
    else
    {
        discount = 0.0;
    }
    
    cout << "Bill amount is: " << billAmount << endl;
    cout << "Discount is: " << discount << endl;
    cout << "Discounted bill amount is: " <<  billAmount - discount << endl;

    return 0;
}