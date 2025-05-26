#include <iostream>
using namespace std;

class Demo
{
    int *p;

public:
    Demo()
    {
        p = new int[10];
        cout << "Constructor of Demo" << endl;
    }
    ~Demo()
    {
        delete[] p;
        cout << "Destructor of Demo" << endl;
    }
};

// void fun()
// {
//     Demo d; // it call both constructor and destructor because it will be create in stack and deleted automatically
// }

void fun()
{
    Demo *p = new Demo(); // Only Constructor is called
    delete p;
}
int main()
{
    fun();
    return 0;
}