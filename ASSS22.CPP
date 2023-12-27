#include<iostream.h>
#include<conio.h>
#include<process.h>
class integer
{
	public :
		int i,sum_o,sum_e,n;

		integer();
		void odd();
		void even();
};
integer :: integer()
{
	sum_e=0;
	sum_o=0;
}
void integer :: even()
{
	cout<<"Enter No :";
	cin>>n;

	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			sum_e=sum_e+i;
		}
	}
	cout<<"Sum Of Even Number : "<<sum_e<<endl;
}
void integer :: odd()
{
	cout<<"Enter No :";
	cin>>n;

	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			sum_o=sum_o+i;
		}
	}
	cout<<"Sum Of Even Number : "<<sum_o<<endl;
}
void main()
{
	clrscr();
	integer i;
	int ch;

	cout<<"1.sum of first N odd Number "<<endl;
	cout<<"2.sum of first N even Number "<<endl;
	cout<<"3.exit "<<endl;

	cout<<"Enter Choice : ";
	cin>>ch;
	cout<<endl;

	switch(ch)
	{
		case 1 :
			i.even();
			break;

		case 2 :
			i.odd();
			break;
		case 3 :
			exit(0);
			break;
		default :
			cout<<"invalid";
			break;
	}

	getch();
}