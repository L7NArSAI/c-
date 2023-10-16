#include<iostream.h>
#include<conio.h>

float area(float a,float b)
{
	return (0.5*a*b);
}
float area(float a)
{
	return ((1.73/4)*a*a);
}
void main()
{
	float a,b,ans;
	char x;
	clrscr();

	cout<<"Enter r,i for desired area of triangle: ";

	cin>>x;
	switch(x)
	{
		case 'r':
		cout<<"Enter Value:";
		cin>>a>>b;
		ans=area(a,b);
		cout<<ans;

		break;

		case 'i':
		cout<<"Enter Value: ";
		cin>>a;
		ans=area(a);
		cout<<ans;

		break;

	}
	getch();
}


