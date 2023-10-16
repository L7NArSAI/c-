#include<iostream>
using namespace std;
 class abc
 {
     int a;
 public:
    abc()
    {
        cout<<"Enter value:";
        cin>>a;
    }
    void operator++()
    {
        cout<<"Value is"<<a++<<endl;
    }
    void operator ++(int)
    {
        cout<<"value is"<<a++<<endl;
    }
    friend  void operator --(abc);
 };
 void operator --(abc a1)
 {
     cout<<"value is"<<--a1.a<<endl;
 }
 int main()
 {
     abc a1;
     a1++;
     ++a1;
     --a1;

     return 0;
 }
