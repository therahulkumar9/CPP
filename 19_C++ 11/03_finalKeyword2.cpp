#include <iostream>
using namespace std;
// final restict inheritance as well as overriding of function same as java but it use before the return type function but here after the name of the function
// then second uses of final keyword
class Parent
{

    // final function of parent class cannot be overrided in the child class
    virtual void show() final
    {
    }
};
class Child : public Parent
{

    // Here overriding of show function is resticted because i use final keyword in parent class with this function
    // void show()
    // {
    // }
};
int main()
{

    return 0;
}