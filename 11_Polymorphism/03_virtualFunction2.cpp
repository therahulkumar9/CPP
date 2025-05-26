#include <iostream>
using namespace std;
class BasicCar
{
public:
    virtual void start()
    {
        cout << "BasicCar started" << endl;
    }
};
class AdvanceCar : public BasicCar
{
public:
    void start() { cout << "AdvanceCar Started" << endl; }
};
int main()
{
    BasicCar *ptr = new AdvanceCar();
    ptr->start();
    return 0;
}