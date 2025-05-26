#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // ofstream is a class
    //  This line creates an ofstream object named outline that opens a file named "My.txt" for writing. The ofstream class is used for writing to files.
    ofstream outline("My.txt");
    // ofstream outline("My.txt", ios::app);
    outline << "Hello" << endl;
    outline << 25 << endl;
    for (int i = 0; i < 10; i++)
    {
        outline << i << endl;
    };

    outline.close();
    return 0;
}