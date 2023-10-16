#include<iostream.h>
#include<conio.h>
void main()
{
	int num,temp,sum,result=0;
	clrscr();


	cout<<"Enter num:";
	cin>>num;
	temp=num;

	while(temp!=0)
	{
	sum=temp%10;
	result=result+(sum*sum*sum);
	temp=temp/10;
	}
	if(result==sum)
	cout<<num<<"Armstrong no.";
	else
	cout<<num<<"Not Armstrong no.";

	getch();

}


