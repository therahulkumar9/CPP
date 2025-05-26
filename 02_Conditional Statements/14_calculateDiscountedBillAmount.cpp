#include <iostream>
using namespace std;
int main(){

    float total, discount, AfterDiscount;
    cout << "Enter total amount: ";
    cin >> total;
    cout << "press 1 for give dicount in rupees" << endl;
    cout << "press 2 for give dicount in percentage" << endl;
    int option;
    cin >> option;
    if(option == 1){
        
        cout << "Enter discount amount: ";
        cin >> discount;
        AfterDiscount = total - discount;
        cout << "Total is: " << AfterDiscount;

    }
    else
    {
        cout << "Enter discount percentage: ";
        cin >> discount;
        AfterDiscount = total - (discount/100)*total;
        cout << "Total is: " << AfterDiscount;
    }
    return 0;
}