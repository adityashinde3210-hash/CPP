#include <iostream>
using namespace std;

// Abstract Base Class
class Vehicle
{
public:
    // Pure virtual functions
    virtual void start() = 0;
    virtual void stop() = 0;
};

// Derived class Car
class Car : public Vehicle
{
public:
    void start() override
    {
        cout << "Car starts with a key." << endl;
    }

    void stop() override
    {
        cout << "Car stops using brakes." << endl;
    }
};

// Derived class Bike
class Bike : public Vehicle
{
public:
    void start() override
    {
        cout << "Bike starts with a self-start button." << endl;
    }

    void stop() override
    {
        cout << "Bike stops using brakes." << endl;
    }
};

int main()
{
    Car car;
    Bike bike;

    // Base class pointer
    Vehicle *ptr;

    // Runtime polymorphism for Car
    ptr = &car;
    ptr->start();
    ptr->stop();

    cout << endl;

    // Runtime polymorphism for Bike
    ptr = &bike;
    ptr->start();
    ptr->stop();

    return 0;
}
