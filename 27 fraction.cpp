#include<iostream>
using namespace std;
class Fraction
{
   int num,den;
public:
   Fraction(int n=0,int d=1)
   {
      num=n;
      den=d;
   }
   Fraction add(Fraction f)
   {
      return Fraction(num*f.den+f.num*den,den*f.den);
   }
   Fraction substract(Fraction f)
   {
     return Fraction(num*f.den-f.num*den,den*f.den);
   }
   void display()
   {
   int a=num,b=den;
   while(b!=0)
   {
      int temp=b;
      b=a%b;
      a=temp;
   }
   num=num/a;
   den=den/a;
   cout<<num<<"/"<<den<<endl;
   }
};
int main()
{
   Fraction f1(3,4),f2(1,4);
   Fraction addition=f1.add(f2);
   Fraction substraction=f1.substract(f2);
   cout<<"First Fraction:";
   f1.display();
   cout<<"Second Fraction:";
   f2.display();
   cout<<"Addition:";
   addition.display();
   cout<<"Substraction:";
   subtraction.display();
   return 0;
}
