#include <iostream>
using namespace std;

class Rectangle
{
public:
    float length;
    float breadth;

    float area()
    {
        return length * breadth;
    }
    float perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    Rectangle r1, r2;
    r1.length = 10;
    r1.breadth = 20;
    cout << "Area is: " << r1.area() << endl;
    cout << "Perimeter is: " << r1.perimeter() << endl;
    return 0;
}