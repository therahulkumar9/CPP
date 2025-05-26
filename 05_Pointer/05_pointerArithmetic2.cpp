#include <iostream>
using namespace std;
int main(){

    int A[5]{2, 4, 6, 8, 10};

    int *p = A;

    for(int i=0; i<5; i++){

        // cout << p[i] << " " << endl;
        // cout << i[p] << " " << endl;
        cout << *(p + i) << " " << endl; // if i don't use * here it will give the address

        // cout << A[i] << " " << endl;
        // cout << i[A] << " " << endl;
        cout << *(A+i) << " " << endl; 
    }
    cout << "Second loop" << endl;
    cout << p << endl;
    for (int i = 0; i < 5; i++)
    {

        cout << *p << endl;
        p++; // Pointer has move outside the array
    }
    cout << p << endl;

    cout << "Third loop" << endl;
    for (int i = 0; i < 5; i++)
    {

        cout << A[0] << " " << endl;
        
        
    }
} 