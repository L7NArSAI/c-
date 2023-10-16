#include<iostream>
#include<string.h>
using namespace std;
class bin_opr
{
    char s1[20];
public:
    void getdata()
    {
        cout<<"Enter String S1";
        cin>>s1;
    }
   /* bin_opr operator +(bin_opr a)
    {
        bin_opr b;
        strcat(s1,a.s1);
        strcpy(b.s1,s1);

        return b;
    }*/
    friend bin_opr operator +(bin_opr a1,bin_opr a2);
    void display()
    {
        cout<<"String is"<<s1;
    }
};
bin_opr operator +(bin_opr a1,bin_opr a2)
{
    strcat(a1.s1,a2.s1);
    return a1;
}
int main()
{
    bin_opr b1,b2,d;
    b1.getdata();
    b2.getdata();
    //d=b1+b2;
    d=operator +(b1,b2);
    d.display();

    return 0;
}
