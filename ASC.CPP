#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,temp,a[6]={3,4,2,1,5,6};
	clrscr();
	for(i=0;i<=5;i++)
	{
		cout<<"\n"<<a[i];
	}
	cout<<"\n _____________ascending order___________________\n";
	for(i=0;i<=5;i++)
	{
		for(j=i+1;j<=5;j++)
		{	if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
		cout<<"\n"<<a[i];
	}
	cout<<"\n _____________descending order___________________\n";
	for(i=0;i<=5;i++)
	{
		for(j=i+1;j<=5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
		cout<<"\n"<<a[i];
	}
	getch();

}
