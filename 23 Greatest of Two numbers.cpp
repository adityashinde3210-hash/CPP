#include <iostream>
using namespace std;

class Greatest
{
    int a, b;

public:
    void accept()
    {
        cout << "Enter First Number: ";
        cin >> a;

        cout << "Enter Second Number: ";
        cin >> b;
    }

    void findGreatest()
    {
        if (a > b)
            cout << "Greatest Number = " << a;
        else if (b > a)
            cout << "Greatest Number = " << b;
        else
            cout << "Both numbers are equal";
    }
};

int main()
{
    Greatest g;
    g.accept();
    g.findGreatest();
    return 0;
}
