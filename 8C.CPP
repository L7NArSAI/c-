#include<iostream>
using namespace std;

class matrix
{
    int a[2][2];
public:
    void getdata()
    {
        cout<<"Enter values:";
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cin>>a[i][j];
            }
        }
    }
    void display()
    {
        cout<<"Matrix is:"<<endl;
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    matrix operator +(matrix m)
    {
        matrix k;

        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                k.a[i][j]=a[i][j]+m.a[i][j];

            }
        }
     return k;
    }
    matrix operator *(matrix u)
    {
        matrix l;
         for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                l.a[i][j]=a[i][j]*u.a[i][j];

            }
        }
        return l;
    }
};
int main()
{
    matrix a,b,d,e;
    a.getdata();
    b.getdata();

    d=a+b;
    e=a*b;
    d.display();
    e.display();

    return 0;
}
