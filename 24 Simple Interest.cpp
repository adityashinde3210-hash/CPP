#include <iostream>
using namespace std;

class Interest
{
    float principal, rate, time;

public:
    void accept()
    {
        cout << "Enter Principal: ";
        cin >> principal;

        cout << "Enter Rate: ";
        cin >> rate;

        cout << "Enter Time: ";
        cin >> time;
    }

    void calculate()
    {
        float si = (principal * rate * time) / 100;
        cout << "Simple Interest = " << si;
    }
};

int main()
{
    Interest i;
    i.accept();
    i.calculate();
    return 0;
}
