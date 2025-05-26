#include <iostream>
using namespace std;

#define maxOfDef(x, y) (x > y ? x : y) // Functions
#define differenceBetBoth(x, y) (x >= y ? x - y : y - x)
#define PI 3.1425 // Doesn't occupy memory // symboic constant
#define MSG(x) #x
#define c cout
// #define PI 3  // Error

#ifndef PI
#define PI 3
#endif

int main()
{

    cout << PI << endl; // 3.1425
    cout << maxOfDef(15, 8) << endl;
    cout << differenceBetBoth(15, 25) << endl;
    cout << MSG(Hello Rahul !) << endl;
    c << 56; // great
    return 0;
}