#include <iostream>
using namespace std;
namespace First
{
    void fun()
    {
        cout << "First" << endl;
    }
}
namespace Second
{
    void fun()
    {
        cout << "Second" << endl;
    }
}
using namespace First; // Avoid these type of statements

int main()
{
    fun();
    Second::fun();
    std::cout << "Hi"; // no problem
    return 0;
}