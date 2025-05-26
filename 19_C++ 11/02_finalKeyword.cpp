#include <iostream>
using namespace std;
// If i use final keyword here then i can inherit a class from Parent class
class Parent final
{
};
class Child : public Parent
{
};
int main()
{

    return 0;
}