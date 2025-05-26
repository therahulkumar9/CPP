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
};
ofstream &operator<<(ofstream &ofs, Student &s)
{
    ofs << s.name << endl;
    ofs << s.roll << endl;
    ofs << s.branch << endl;
    return ofs;
}
int main()
{
    Student s1;
    s1.name = "Rahul";
    s1.roll = 04;
    s1.branch = "CSC";

    ofstream ofs("Student.txt", ios::trunc);
    // ofs << s1.name << '\n';
    // ofs << s1.roll << '\n';
    // ofs << s1.branch << '\n';

    // Want to store all value at one
    ofs << s1;
    ofs.close();
    return 0;
}