#include<iostream>

using namespace std;

class num1
{
    float a,b,c;
public:
    void getdata()
    {
        cout<<"Enter Values of a and b:"<<endl;

        cin>>a>>b;

    }
    void display()
    {
        cout<<"Mean is :"<<c<<endl;
    }
    friend void mean(num1 n1);

};
void mean(num1 n1)
{
    n1.c=(n1.a + n1.b)/2;
}
int main()
{
    num1 m;
    m.getdata();
    mean(m);
    m.display();

    return 0;
}
