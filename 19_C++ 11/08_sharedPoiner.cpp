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
    shared_ptr<Rectangle> ptr(new Rectangle(10, 5));
    cout << ptr->area() << '\n';
    shared_ptr<Rectangle> ptr2;
    ptr2 = ptr;
    cout << "ptr 2: " << ptr2->getBreadth() << endl;
    cout << "ptr 2: " << ptr2->area() << '\n';
    cout << "ptr : " << ptr->area() << '\n';
    cout << "Reference count: " << ptr.use_count() << '\n';

    return 0;
}