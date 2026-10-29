#include <iostream>
using namespace std;

class Number
{
private:
    int n;

public:
    Number(int x)
    {
        n = x;
    }

    
    void operator++()
    {
        ++n;
    }

    void display()
    {
        cout << "Number = " << n << endl;
    }
};

int main()
{
    Number obj(15);

    cout << "Before increment ";
    obj.display();

    ++obj;   

    cout << "After increment " ;
    obj.display();

    return 0;
}
