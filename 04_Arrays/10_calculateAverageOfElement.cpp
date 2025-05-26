#include <iostream>
using namespace std;

int main()
{

    float num[100];
    float n, sum = 0.0, average;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "Average = " << average;
    return 0;
}