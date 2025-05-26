// It is useful for defining unnamed function
#include <iostream>
using namespace std;

template <typename T>
void fun(T p)
{
    p();
}
int main()
{
    // []()
    // { cout << "Hello" << '\n'; }();

    // [](int x, int y)
    // { cout << "Sum is: " << x + y << '\n'; }(4, 6);

    // cout << ([](int x, int y)
    //          { return x + y; }(10, 30));

    // int x = [](int x, int y)
    // { return x + y; }(10, 30);

    // int x = [](int x, int y) -> int
    // { return x + y; }(10, 30);
    // cout << x;

    // int a = 10;
    // [a]()
    // { cout << a << '\n'; }();

    // int a = 10;
    // auto f = [a]()
    // { cout << a << '\n'; }; // Here a is replace by 10
    // f(); // 10
    // a++;
    // f(); // 10

    // int a = 10;
    // auto f = [&a]()
    // { cout << a << '\n'; }; // Here it take current value
    // f();                    // 10
    // a++;
    // f(); // 11

    // int a = 10;
    // auto f = [&a]()
    // { cout << a++ << '\n'; }; // Here it take current value
    // f();                    // 10
    // a++;
    // f(); // 12

    // Labda expression can be send to a function as a parameter
    int a = 10;
    auto f = [&a]()
    { cout << a++ << '\n'; };
    fun(f);
    fun(f);
    return 0;
}