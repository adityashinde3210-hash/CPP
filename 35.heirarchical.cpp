#include<iostream>
using namespace std;

class employee
{
protected:
      string empname;
      int empid;
      string department;
public :
      void getemployeedetails()
        {
          cout<<"Enter employee name :";
          cin>>empname;
          cout<<"Enter employee id:";
          cin >>empid;
          cout<<"Enter department:";
          cin >>department;
          }
        void displayempdetails()
        {
              cout<<" Employee name :"<<empname<<endl;
               cout<<" Employee id :"<<empname<<endl; 
               cout<<"Department :"<<department<<endl;
               }
             
             };
class teachingstaff : public employee{
    private:
            string subject;
            string qualification;
            
    public:
         void getteachingdetails()
        {
          cout<<"Enter subject :";
          cin>>subject;
          cout<<"Enter qualification:";
          cin >>qualification;
          }
          
      void displayteachingdetails()
        {
          cout<<" subject :"<<subject<<endl;
          cout<<" qualification:"<<qualification<<endl;
          }
          };
class nonteachingstaff : public employee{
    private:
            string designation;
            int workinghours;
            
    public:
         void getnonteachingdetails()
        {
          cout<<"Enter designation :";
          cin>>designation;
          cout<<"Enter workinghours:";
          cin >>workinghours;
          }
          
      void displaynonteachingdetails()
        {
          cout<<" designation :"<<designation<<endl;
          cout<<" workinghours:"<<workinghours<<endl;
          }
          };   
          
int main()
{
    teachingstaff teacher;
    teacher.getteachingdetails();
    nonteachingstaff staff;
    staff.getnonteachingdetails();
    
    cout<<"display details"<<endl;
    
    teacher.displayteachingdetails();
    
    
    staff.displaynonteachingdetails();
    return 0;
    }
