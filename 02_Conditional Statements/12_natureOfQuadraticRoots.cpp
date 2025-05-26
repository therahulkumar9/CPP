#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a, b, c, d, r1, r2;
    cout << "Enter a, b and c: " << endl;
    cin >> a >> b >> c;
    d = b * b - 4*a*c;
    r1 = -b+sqrt(b*b - 4 * a * c)/(2*a);
    r2 = -b-sqrt(b*b - 4 * a * c)/(2*a);
    
    if (d==0)
    {
        cout << "Roots are real and equal";
        cout << endl << (-b/(2 * a));
    }
    else if (d>0)
    {
        cout << "Roots are real and unequal";
        cout << endl << r1;
        cout << endl << r2;

    }
    else
    {
        cout << "Imaginary";
    }
    
    
    return 0;
}