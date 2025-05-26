#include <iostream>
using namespace std;
class Your;
class My
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend Your;
};
class Your
{
public:
    My m;
    void fun()
    {
        m.a = 18;
        m.b = 45;
        m.c = 9;
        cout << m.a << m.b << m.c;
    }
};

int main()
{
    Your y;
    y.fun();
    return 0;
}