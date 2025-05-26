#include <iostream>
using namespace std;

int main()
{
    float r, area;

    cout << "Enter the radius of circle: ";
    cin >> r;
    area = 3.1416f * r * r;
    // area = 22/7 * r * r; // Here 22/7 give quotient only thats why it give integer value.
    // area = (float)22/7 * r * r; // float value
    // area = 22/7.0 * r * r; // It gives float value.
    cout << "The area of the circle with a radius of " << r << " is approximately " << area << "  square unit";
    return 0;
}