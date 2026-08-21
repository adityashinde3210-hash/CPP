#include<iostream>
using namespace std;
class Time
{
   int hours,minutes,seconds;
public:
   Time(int h=0,int m=0,int s=0)
   {
      hours=h;
      minutes=m;
      seconds=s;
   }
   Time add(Time t)
   {
      int s=seconds+t.seconds;
      int m=minutes+t.minutes+s/60;
      int h=hours+t.hours+m/60;
      s=s%60;
      m=m%60;
      return Time(h,m,s);
   }
   void display()
   {
      cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
   }
};
int main()
{
   Time t1(10,45,30),t2(5,20,45);
   Time result=t1.add(t2);
   cout<<"First Time:";
   t1.display();
   cout<<"Second Time:";
   t2.display();
   cout<<"Addition:";
   result.display();
   return 0;
}
