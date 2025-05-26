#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m.insert(pair<int, string>(1, "john"));
    m.insert(pair<int, string>(2, "Peter"));
    m.insert(pair<int, string>(3, "Rahul"));

    map<int, string>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        cout << itr->first << " " << itr->second << '\n';
    }

    // Search
    cout << "Searched result" << '\n';
    map<int, string>::iterator itr1;
    itr1 = m.find(2);
    cout << "Value found" << '\n';
    cout << itr1->first << " " << itr1->second << endl;

    return 0;
}