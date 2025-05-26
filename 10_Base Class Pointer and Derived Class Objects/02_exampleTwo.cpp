#include <iostream>
using namespace std;

class Rectangle
{
public:
    void area()
    {
        cout << "Area of Rectangle" << endl;
    }
};
class Cuboid : public Rectangle
{
public:
    void volume()
    {
        cout << "Volume of Cuboid" << endl;
    }
};
int main()
{

    // Cuboid c;
    // c.area();
    // c.volume();

    Cuboid c;
    Rectangle *p = &c;
    p->area();
    // p->volume(); // Error




    // Rectangle r;   
    // Cuboid *q = &r; // Error

    return 0;
}