#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<float> v = {2, 4, 6, 8, 10};
    vector<int> v = {2, 4, 6, 8, 10};
    v.push_back(20);
    v.push_back(30);

    v.pop_back();

    vector<int>::iterator itr;
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