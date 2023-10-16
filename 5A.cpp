#include<iostream>
#include<conio.h>

using namespace std;
class B;
class A
{
    int a;

public:

    void getdata()
    {
        cout<<"Enter Value:"<<endl;
        cin>>a;
    }
    void display()
    {
        cout<<"Value of a before swap is:"<<a;
    }
    friend void swap(A &,B &);
};
class B
{
    int b;

public:

    void getdata()
    {
        cout<<"Enter Value"<<endl;
        cin>>b;
    }
    void display()
    {
        cout<<"Value of b before swap is:"<<b<<endl;
    }
    friend void swap(A &, B &);

};
void swap(A &e,B &f)
{
    int temp=e.a;
    e.a=f.b;
    f.b=temp;
}
int main()
{
    A x;
    B y;
    x.getdata();
    y.getdata();
    x.display();
    y.display();

    swap(x,y);
    x.display();
    y.display();
    getch();
}
