#include <iostream>
using namespace std;

int main()
{
    // int i = 5;
    // i = i+1; // 6
    // i+=1; // 7
    // i++; // 8 Post-Increment
    // ++i; // 9 Pre-Increment
    // cout << i; // It print 9



    int i = 5, j;
    // j = 2 * ++i + 2 * i++; // result is 24 but result is 26 in my compiler
    j = 2 * i++ + 2 * i++; // result is 22
    cout << j << endl;
    // j = ++i; //here j = 6
    j = ++i; // here j = 5 that is x
    cout << "i is: " << i << endl << "j is: " << j;


    return 0;
}