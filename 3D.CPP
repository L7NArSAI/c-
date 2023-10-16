#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
max(int a,int b,int c)
{
    if(a>b && a>c)
        cout<<"a is largest"<<a<<endl;
    else if(b>c)
        cout<<"b is largest"<<b<<endl;
    else
        cout<<"c is largest"<<c<<endl;

}

max(float a,float b,float c)
{
    if(a>b && a>c)
        cout<<"a is largest"<<a<<endl;
    else if(b>c)
        cout<<"b is largest"<<b<<endl;
    else
        cout<<"c is largest"<<c<<endl;

}

max(char p[10],int q[10],int r[10])
{


    int a=strlen(p),b=strlen(q),c=strlen(r);

    if(a>b && a>c)
        cout<<"a is largest"<<a;
    else if(b>c)
        cout<<"b is largest"<<b;
    else
        cout<<"c is largest"<<c;

}
int main()
{
    int p=10,q=11,r=12;
    float x=10.36,y=11.36,z=65.69;
    char e[10]="HELLO" ;
    char f[10]="HI" ;
    char g[10]="BYE";
    max(p,q,r);
    max(x,y,z);
    max(e,f,g);

    return 0;
}
