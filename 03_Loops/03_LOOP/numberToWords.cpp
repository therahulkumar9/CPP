#include <iostream>
using namespace std;

string fun1(int n)
{
    switch (n)
    {
    case 0:
        return "zero";
        break;
    case 1:
        return "one";
        break;
    case 2:
        return "two";
        break;
    case 3:
        return "three";
        break;
    case 4:
        return "four";
        break;
    case 5:
        return "five";
        break;
    case 6:
        return "six";
        break;
    case 7:
        return "seven";
        break;
    case 8:
        return "eight";
        break;
    case 9:
        return "nine";
        break;
    default:
        return "Invalid";
        break;
    }
}

int main()
{
    int n, r, rev = 0;
    cout << "Enter n: ";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }

    while (rev > 0)
    {
        r = rev % 10;
        rev = rev / 10;
        cout << fun1(r) << " ";
    }

    return 0;
}