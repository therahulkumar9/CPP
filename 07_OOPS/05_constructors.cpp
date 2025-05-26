#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;   
    int breadth;

public:
    // Rectangle()
    // {
    //     length = 1;
    //     breadth = 1;
    // }

    // Default arguments
    Rectangle(int l = 1, int b = 1)
    {
        setLength(l);
        setBreadth(b);
    }

    // Copy constructor
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }
    void setLength(int l)
    {
        if (l > 0)
            length = l;
        else
            length = 1;
    }
    void setBreadth(int b)
    {
        if (b > 0)
            breadth = b;
        else
            breadth = 1;
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
    // Rectangle r1;
    Rectangle r1(10, 5);
    Rectangle r2(r1);

    cout << r1.area() << endl;
    cout << r2.perimeter() << endl;
    return 0;
}