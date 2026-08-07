#include<iostream>
using namespace std;
class Employee
{
private:
   int employeeID;
   string name;
   float salary;
public:
   void accept()
   {
      cout<<"Enter Employee ID:";
      cin>>employeeID;
      cout<<"Enter Employee Name:";
      cin>>name;
      cout<<"Enter Salary:";
      cin>>salary;
   }
   void display()
   {
      cout<<"\nEmployee Details"<<endl;
      cout<<"Employee ID:"<<employeeID<<endl;
      cout<<"Employee Name:"<<name<<endl;
      cout<<"Salary:"<<salary<<endl;
   }
};
int main()
{
   Employee e;
   e.accept();
   e.display();
   return 0;
}
