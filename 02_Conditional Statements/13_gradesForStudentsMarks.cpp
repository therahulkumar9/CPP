#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3, total;
    float avg;

    cout << "Enter marks of 3 subjects: ";
    cin >> m1 >> m2 >> m3;
    total = m1 + m2 + m3;
    avg = total / 3.0;
    if (avg >= 60)
    {
        cout << "Grade is A" << endl;
    }
    else if (avg >= 35 && avg < 60)
    {
        cout << "Grade is B" << endl;
    }
    else
        cout << "Grade is C" << endl;

    return 0;
}