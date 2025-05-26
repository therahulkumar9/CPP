#include <iostream>
using namespace std;

// all these are constant under one name and constant start for zero onward
enum day
{
    mon,
    tue,
    wed,
    thu,
    fri,
    sat,
    sun
};

// We can also write this
enum day2
{
    mon2 = 1,
    tue2,
    wed2,
    thu2 =10,
    fri2,
    sat2,
    sun2
};

// Also use this of symbolic constant
// #define sat2 0;
// const int mon =0;



enum dept {cse=1, it , ece, mech, civil}; // start from 1 onward
int main()
{

    day d;
    // d = tue; // 1
    d = mon; // value of monday is 0
    cout << d;
    cout << sat; // 5

    // For day 2
    cout << endl << "---------------For day2---------------" << endl;
    cout << mon2 << endl;
    cout << tue2 << endl;
    cout << wed2 << endl;
    cout << thu2 << endl;
    cout << fri2 << endl;
    cout << sat2 << endl;
    cout << sun2 << endl;


    dept dep;
    dep = civil;
    cout << "code for civil is: " << civil;
    return 0;
}