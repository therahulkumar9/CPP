#include <iostream>
using namespace std;
// Example 3rd
class BasicCar
{
public:
    void start()
    {
        cout << "Car started" << endl;
    }
};
class AdvanceCar : public BasicCar
{
public:
    void playMusic()
    {
        cout << "Music Playing" << endl;
    }
};
int main()
{
    // AdvanceCar a;
    // a.start();
    // a.playMusic();




    // AdvanceCar a;
    // BasicCar *ptr = &a;
    // ptr->start();
    // // ptr->playMusic(); // Error






    // BasicCar b;
    // AdvanceCar *p = &b; // Error
    return 0;
}