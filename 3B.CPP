 #include<iostream.h>
#include<conio.h>
int value(int a)
{
	a--;
	cout<<"Value is: "<<a<<endl;
	return a;

}
int ref(int &a)
{
	a++;
	cout<<"Value is: "<<a<<endl;
	return a;
}
void main()
{
		 int a=3;
		 clrscr();
		 value(a);
		 cout<<"Call By Value: "<<a<<endl;

		 ref(a);
		 cout<<"Call By Reference: "<<a<<endl;

		 getch();

}
