#include <iostream>
using namespace std;

// Default Arguments
int sum(int a, int b, int c = 0)
{
    return a + b + c;
}

// int sum(int a, int b)
// {
//     return a + b;
// }

// int sum(int a, int b, int c){
//     return a + b + c;
// }

// int max(int a=, int b = 0, int c = 0)
int max(int a = 0, int b = 0, int c = 0)
{

    return a > b && a > c ? a : b > c ? b
                                      : c;
}

int main()
{

    cout << max() << endl;
    cout << max(10) << endl;
    cout << max(10, 34) << endl;
    cout << max(10, 34, 56) << endl;

    int a, b, c;
    a = sum(2, 3);
    b = sum(4, 5, 6);
    c = sum(7, 8, 0);
    cout << a << " " << b << " " << c;
    cout << endl;
    cout << max(52, 17, 8) << "  " << max(5, 6);

    return 0;
}