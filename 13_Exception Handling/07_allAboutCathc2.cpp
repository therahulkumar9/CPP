#include <iostream>
using namespace std;
class MyException1 : exception
{
};
class MyException2 : public MyException1
{
};
int main()
{

    try
    {
        throw MyException1();
    }
    // Child class firsly catch then parent
    catch (MyException2 e)
    {
        cout << "Int Catch" << endl;
    }
    catch (MyException1 e)
    {
        cout << "Double Catch" << endl;
    }
    catch (char e)
    {
        cout << "Char Catch" << endl;
    }
    catch (...)
    {   // All catch or universal catch
        // Catch-all handler must come in last
        cout << "All Catch";
    }

    return 0;
}