#include <iostream>
using namespace std;
class Student
{
private:
    int Roll;
    string Name;
    int mathMarks;
    int physicsMarks;
    int chemistryMarks;

public:
    Student(int roll, string name, int m, int p, int c)
    {
        Roll = roll;
        Name = name;
        mathMarks = m;
        physicsMarks = p;
        chemistryMarks = c;
    };
    int Total()
    {
        return mathMarks + chemistryMarks + physicsMarks;
    }

    char grade()
    {
        float average = Total() / 3;
        if (average > 60)
            return 'A';
        else if (average >= 40 && average < 60)
            return 'B';
        else
            return 'C';
    }
    string getName()
    {
        return Name;
    };
};

int main()
{
    int roll;
    cout << "Enter roll of student: ";
    cin >> roll;
    string name;
    cout << "Enter name of student: ";
    cin >> name;
    cout << "Enter marks of student of all three subject." << endl;
    int m, p, c;
    cout << "Math marks: ";
    cin >> m;
    cout << "Physics marks: ";
    cin >> p;
    cout << "Chemistry marks: ";
    cin >> c;
    Student s1 = {roll, name, m, p, c};
    cout << "Name: " << s1.getName() << endl;
    cout << "Total marks: " << s1.Total() << endl;
    cout << "Grade of student: " << s1.grade() << endl;
    return 0;
}