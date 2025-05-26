#include <iostream>
#include <memory>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
};
int main()
{
    unique_ptr<Rectangle> ptr(new Rectangle(10, 5));
    cout << ptr->area() << '\n';
    // unique_ptr<Rectangle> ptr2 = ptr; // I cannot do it
    unique_ptr<Rectangle> ptr2;
    ptr2 = move(ptr);
    cout << ptr2->getBreadth() << endl;
    cout << ptr2->area() << '\n';

    return 0;
}