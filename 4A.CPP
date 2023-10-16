#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    char sname[20];
    int sid,scsem;
    float scpi,sspi;

public:
      void getdata()
      {
          cout<<"Enter student Name:";
          cin>>sname;
          cout<<endl<<"Enter student ID and Current Sem:";
          cin>>sid>>scsem;
          cout<<endl<<"Enter CPI and SPI:";
          cin>>scpi>>sspi;
          cout<<endl;
      }
      void display()
      {

          cout<<"Student Name is:"<<sname<<endl;
          cout<<"Student ID and Current SEM is:"<<sid<<scsem<<endl;
          cout<<"Student CPI and SPI is"<<scpi<<" and "<<sspi;
      }
};
int main()
{
    student s;
    s.getdata();
    s.display();

    getch();
}
