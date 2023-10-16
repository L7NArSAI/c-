#include<iostream.h>
#include<conio.h>
inline int max(int x,int y,int z)
{
	if(x>y && x>z)
	{
		return x;
	}
	else if(y>z)
	{
	return y;
	}
	else
	{
	    return z;
	}

}

void main()
{
     int a,b,c;
     clrscr();

     cout<<"Enter value of a,b,c"<<endl;
     cin>>a>>b>>c;

     max(a,b,c);
     getch();

}
