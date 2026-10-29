#include <iostream>
using namespace std;

// Base class
class Employee
{
protected:
    float basicSalary;

public:
    Employee(float salary)
    {
        basicSalary = salary;
    }

    // Virtual function
    virtual void calculateSalary()
    {
        cout << "Employee Salary = " << basicSalary << endl;
    }
};

// Derived class Manager
class Manager : public Employee
{
public:
    Manager(float salary) : Employee(salary)
    {
    }

    void calculateSalary() override
    {
        float bonus = basicSalary * 0.20;   // 20% bonus
        float totalSalary = basicSalary + bonus;

        cout << "Manager Basic Salary = " << basicSalary << endl;
        cout << "Manager Bonus = " << bonus << endl;
        cout << "Manager Total Salary = " << totalSalary << endl;
    }
};

// Derived class Developer
class Developer : public Employee
{
public:
    Developer(float salary) : Employee(salary)
    {
    }

    void calculateSalary() override
    {
        float bonus = basicSalary * 0.10;   // 10% bonus
        float totalSalary = basicSalary + bonus;

        cout << "Developer Basic Salary = " << basicSalary << endl;
        cout << "Developer Bonus = " << bonus << endl;
        cout << "Developer Total Salary = " << totalSalary << endl;
    }
};

int main()
{
    Manager manager(50000);
    Developer developer(40000);

    Employee *ptr;

    // Runtime polymorphism for Manager
    ptr = &manager;
    ptr->calculateSalary();

    cout << endl;

    // Runtime polymorphism for Developer
    ptr = &developer;
    ptr->calculateSalary();

    return 0;
}
