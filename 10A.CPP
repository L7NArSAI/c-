#include<iostream>
using namespace std;

class base
{
public:
    int a,b;

    void getdata()
    {
        cout<<"Enter a and b";
        cin>>a>>b;
    }

};
class derived:public base
{
public:
    void multiply()
    {
        cout<<"Product is: "<<a*b;
    }
};
int main()
{
    derived d1;
    d1.getdata();
    d1.multiply();

    return 0;
}
