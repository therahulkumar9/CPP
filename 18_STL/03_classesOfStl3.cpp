#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> v = {2, 4, 6, 8, 10, 10};
    v.insert(20);
    v.insert(30);

    v.erase(4);

    set<int>::iterator itr;
    cout << "Using Iterator" << endl;
    for (itr = v.begin(); itr != v.end(); itr++)
        cout << *itr << '\n';

    cout << "Using for each loop" << "\n";
    for (int x : v)
    {
        cout << x << endl;
    }
    return 0;
}