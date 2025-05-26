#include <iostream>
using namespace std;

// typedef is used for defining our own datatype or giving alias to some datatype to make program more readable

typedef int marks;
typedef char grade;
int main()
{

    // m1 and m2 are for storing marks
    // rather than using these comments we use typedef

    marks m1, m2;
    grade g1, g2;
    g1 = 'b';
    g2 = 'A';
    m1 = 30;
    m2 = 45;
    return 0;
}