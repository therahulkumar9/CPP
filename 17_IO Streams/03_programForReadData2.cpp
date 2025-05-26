#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("Read2.txt");

    if (!infile.is_open())
    {
        cout << "File cannot be opened" << endl;
        return 1;
    }

    string line;
    getline(infile, line);
    cout << "First line: " << line << endl;

    int x;
    infile >> x;
    cout << "Integer value: " << x << endl;

    char y;
    infile >> y;
    cout << "ASCII of First character of next line : " << (int)y << endl;

    if (infile.eof())
        cout
            << "End of file reached"
            << endl;

    infile.close();
    return 0;
}