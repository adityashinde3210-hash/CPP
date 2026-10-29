#include<iostream>
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
void operator-()
    {
        n=-n;
    }
void display()
{
cout<<"=  "<<n<< endl;
}
};
int main()
{
    Number obj(20);

    cout << "No Before (-) operator:" ;
    obj.display();

    -obj;   

    cout << "No After (-) operator:" ;
    obj.display();

    return 0;
}
