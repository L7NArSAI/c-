#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a=19;
	int &b=a;


	cout<<a<<endl;
	cout<<b<<endl;
	cout<<&b<<endl;
	b--;
	cout<<b<<endl;
	cout<<&b<<endl;
	cout<<a;

	return 0;



}
