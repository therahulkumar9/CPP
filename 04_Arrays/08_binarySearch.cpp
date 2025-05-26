#include <iostream>
using namespace std;

int main()
{
    int A[10] = {2, 5, 4, 9, 12, 45, 43, 62, 23, 13};
    int l = 0, h = 9, mid, key;
    cout << "Enter key: ";
    cin >> key;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == A[mid])
        {
            cout << "Found at " << mid;
            return 0;
            // exit(0);
        }
        else if (key < A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << "Not found";

    return 0;
}