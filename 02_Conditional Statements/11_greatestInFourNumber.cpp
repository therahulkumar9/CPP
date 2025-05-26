#include <iostream>
using namespace std;

int main()
{
    // Declare four variables to store the numbers
    int num1, num2, num3, num4;

    // Prompt the user to enter the numbers
    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    // Assume the first number is the greatest
    int greatest = num1;

    // Compare with the second number
    if (num2 > greatest)
    {
        greatest = num2;
    }

    // Compare with the third number
    if (num3 > greatest)
    {
        greatest = num3;
    }

    // Compare with the fourth number
    if (num4 > greatest)
    {
        greatest = num4;
    }

    // Output the greatest number
    cout << "The greatest number is: " << greatest << endl;

    return 0;
}
