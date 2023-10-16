#include<iostream>
#include<Conio.h>
using namespace std;
class bank
{
    char sname[20];
    int acc_no,wamt,bal;
    public :
    void getdata()
    {

        cout<<"Enter name: ";
        cin>>sname;
        cout<<endl;
        cout<<"Enter Account Number:";
        cin>>acc_no;
         cout<<endl;
        cout<<"Enter amount to be withdraw:";
        cin>>wamt;
         cout<<endl;
        cout<<"Enter amount to be kept balance:";
        cin>>bal;
         cout<<endl;
    }
    void deposit()
    {
        int dp;
        cout<<"Enter Amount to be deposited"<<endl;
        cin>>dp;
        bal=bal+dp;
        cout<<"Your Amount is deposited...Your Current balance is: "<<bal<<endl;
    }
    void withdraw()
    {
        if(wamt>bal)
            cout<<"Your Account balance is Insufficient..."<<endl;
        else
        {
            bal=bal-wamt;
            cout<<"Your Current Balance after withdraw is: "<<bal<<endl;
        }
    }
    void display()
    {
        cout<<"Name: "<<sname<<endl;
        cout<<"Balance: "<<bal;
    }
};
int main()
{
    bank b;
    b.getdata();
    b.deposit();
    b.withdraw();
    b.display();
    getch();
}
