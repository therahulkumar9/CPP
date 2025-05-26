#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength() { return length; }
    int getBreadth() { return breadth; }
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};

Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}
void Rectangle::setBreadth(int b)
{
    breadth = b;
}
void Rectangle::setLength(int l)
{
    length = l;
}

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

bool Rectangle::isSquare()
{
    return length == breadth;
}

Rectangle::~Rectangle()
{
    // Destructor implementation
    cout << "Rectangle Destroyed" << endl;
}

int main()
{
    // Example usage
    Rectangle rect1(14, 10);
    cout << "Area: " << rect1.area() << endl;
    cout << "Perimeter: " << rect1.perimeter() << endl;
    cout << "Is Square: " << (rect1.isSquare() ? "Yes" : "No") << endl;

    return 0;
}