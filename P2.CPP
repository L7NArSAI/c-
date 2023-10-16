#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,d;
	char op;
	clrscr();
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;

	cout<<"Enter opereator:";
	cin>>op;

	switch(op)
	{
	case '+':
	cout<<a<<"+"<<b"="<<a+b;

	break;

	case '-':
	cout<<a<<"-"<<b"="<<a-b;
	break;

	case '*':
	cout<<a<<"*"<<b"="<<a*b;
	break;

    case '/':
	cout<<a<<"/"<<b"="<<a/b;
	break;

	default:
        cout<<"Error";
        break;
	}


	 cout<<d;

    getch();
}
