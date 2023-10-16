#include<iostream>
using namespace std;
class base1
{
public:
    int a;
    void getdata1()
    {
        cout<<"Enter a: ";
        cin>>a;
    }
};
class base2
{
public:
    int b;
    void getdata2()
    {
        cout<<"Enter b: ";
        cin>>b;
    }
};
class derived : public base1,public base2
{
public:
    void multiply()
    {
        cout<<"product is"<<a*b;
    }
};
int main()
{
    derived d1,d2,d3;
    d1.getdata1();
    d2.getdata2();

    d3.multiply();

    return 0;
}

