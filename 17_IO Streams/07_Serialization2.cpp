// Serialization is a process of storing and retrieving the state of an object

#include <iostream>
#include <fstream>

using namespace std;
class Student
{

public:
    string name;
    int roll;
    string branch;
    friend ofstream &operator<<(ofstream &ofs, Student &s);
    friend ifstream &operator>>(ifstream &ifs, Student &s);
};
ofstream &operator<<(ofstream &ofs, Student &s)
{
    ofs << s.name << endl;
    ofs << s.roll << endl;
    ofs << s.branch << endl;
    return ofs;
}
ifstream &operator>>(ifstream &ifs, Student &s)
{
    ifs >> s.name;
    ifs >> s.roll;
    ifs >> s.branch;
    return ifs;
}

int main()
{
    Student s1;
    ifstream ifs("Student2.txt");

    
        ifs >> s1;

        cout << "Name: " << s1.name << endl;
        cout << "Roll: " << s1.roll << endl;
        cout << "Branch: " << s1.branch << endl;
        ifs.close();
    
    
    return 0;
}