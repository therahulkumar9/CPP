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
class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int h, int l = 1, int b = 1)
    {
        height = h;
        setLength(l);
        setBreadth(b);
    };
    int volume()
    {
        return getLength() * getBreadth() * height;
    }
    int getHeight() { return height; }
    void setHeight(int h) { height = h; }
};
int main()
{
    Rectangle rect1(14, 10);
    Cuboid c(5);
    c.setLength(6);
    c.setBreadth(10);
    cout << "Volume is: " << c.volume() << endl;
    return 0;
}