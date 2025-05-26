#include <iostream>
using namespace std;
int main()
{

    try
    {
        // throw 1;
        // throw 1.5;
        // throw 'a';
        throw string("Hi sir");
    }
    catch (int e)
    {
        cout << "Int Catch" << endl;
    }
    catch (double e)
    {
        cout << "Double Catch" << endl;
    }
    catch(char e){
        cout << "Char Catch" << endl;
    }
    catch(...){ // All catch or universal catch
        cout << "All Catch";
    }

    return 0;
}