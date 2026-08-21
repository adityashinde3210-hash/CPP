#include<iostream>
using namespace std;

class fraction
{
    int num,den;

public:
   void input()
   {
        cout<<"Enter numerator and denominator:";
        cin>>num>>den;
    }
    fraction add(fraction f)
    {
        fraction temp;
        temp.num=(num*f.den)+(f.num*den);
        temp.den=den*f.den;
        return temp;    
    }
    fraction sub(fraction f)
    {
      fraction temp;
      temp.num=(num*f.den)-(f.num*den);
      temp.den=den*f.den;
      return temp;    
    } 
    void display()
    {
        cout<<num<<"/"<<den;
    } 
};
int main()
{
    fraction f1,f2,f3;

    f1.input();
    f2.input();

    f3=f1.add(f2);
    cout<<"Addition=";
    f3.display();

    f3=f1.sub(f2);
    cout<<"\nSubstraction=";
    f3.display();

    return 0;
}
