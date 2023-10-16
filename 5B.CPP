#include<iostream>

using namespace std;

class complex2;
class complex1{
int a,b;

public:
    complex1(int z,int y)
    {
        a=z;
        b=y;
        cout<<"Complex:"<<z<<"+"<<y<<"i";
    }
    friend void add(complex1,complex2);
};
class complex2{
int q,v;
public:
    complex2(int z,int x)
    {
        q=z;
        v=x;
        cout<<"Complex:"<<z<<"+"<<x;
    }
};
void add(complex1 c1,complex2 c2)
{
    cout<<"Now complex is:"<c1.a+c2.q<<"+"<<c1.b+c2.v<<"i"<<endl;
}
int main()
{
    complex1 qq(3,30);
    complex2 ww(5,10);
    add(qq,ww);
    return 0;
}



