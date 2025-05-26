#include <iostream>
using namespace std;

class Test
{
public:
    int a;
    static int count;
    Test()
    {
        a = 10;
        count++;
    }

    static int getCount()
    {
        // a++; // Error
        return count;
    }
};
int Test::count = 0;
int main()
{
    Test t1, t2;
    cout << t1.count << endl;
    cout << t2.count << endl;
    cout << Test::count << endl;
    t1.count = 25; // because count is a single varible inside class for all objects
    cout << t2.count << endl;
    cout << Test::count << endl;
    int x = Test::getCount();
    cout << "x = " << x << endl;
    cout << t1.getCount();
    return 0;
}