#include <iostream>
// #include <vector>
// #include <list>
#include <forward_list>
using namespace std;

int main()
{
    // vector<float> v = {2, 4, 6, 8, 10};
    // list<int> v = {2, 4, 6, 8, 10};
    forward_list<int> v = {2, 4, 6, 8, 10};
    v.push_front(20);
    v.push_front(30);

    v.pop_front();

    forward_list<int>::iterator itr;
    cout << "Using Iterator" << endl;
    for (itr = v.begin(); itr != v.end(); itr++)
        cout << *itr << '\n';
    // cout << " " << ++*itr << '\n'; // Value incremented

    cout << "Using for each loop" << "\n";
    for (int x : v)
    {
        cout << x << endl;
    }
    return 0;
}