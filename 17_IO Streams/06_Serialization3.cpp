// // Serialization is a process of storing and retrieving the state of an object

// #include <iostream>
// #include <fstream>

// using namespace std;

// class Student
// {
// public:
//     string name;
//     int roll;
//     string branch;

//     friend ostream &operator<<(ostream &os, const Student &s);
//     friend istream &operator>>(istream &is, Student &s);
// };

// ostream &operator<<(ostream &os, const Student &s)
// {
//     os << s.name << endl;
//     os << s.roll << endl;
//     os << s.branch << endl;
//     return os;
// }

// istream &operator>>(istream &is, Student &s)
// {
//     getline(is, s.name);
//     is >> s.roll;
//     is.ignore(); // Ignore the newline character after roll
//     getline(is, s.branch);
//     return is;
// }

// int main()
// {
//     Student s1;
//     ifstream ifs("Student.txt");

//     if (ifs.is_open())
//     {
//         ifs >> s1;

//         cout << "Name: " << s1.name << endl;
//         cout << "Roll: " << s1.roll << endl;
//         cout << "Branch: " << s1.branch << endl;
//         ifs.close();
//     }
//     else
//     {
//         cout << "Unable to open file" << endl;
//     }

//     return 0;
// }

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

    friend ostream &operator<<(ostream &os, const Student &s);
    friend istream &operator>>(istream &is, Student &s);
};

ostream &operator<<(ostream &os, const Student &s)
{
    os << s.name << endl;
    os << s.roll << endl;
    os << s.branch << endl;
    return os;
}

istream &operator>>(istream &is, Student &s)
{
    is >> s.name;
    is >> s.roll;
    is >> s.branch;
    return is;
}

int main()
{
    Student s1;
    ifstream ifs("Student.txt");

    if (ifs.is_open())
    {
        ifs >> s1;

        cout << "Name: " << s1.name << endl;
        cout << "Roll: " << s1.roll << endl;
        cout << "Branch: " << s1.branch << endl;
        ifs.close();
    }
    else
    {
        cout << "Unable to open file" << endl;
    }

    return 0;
}