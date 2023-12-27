#include<iostream.h>
#include<conio.h>
#include<process.h>
class myarray
{
	public :
		int n,i,a[15],temp,j;

		void getdata();
		void display();
		void sort_asc();
		void sort_des();
};
void myarray :: getdata()
{
	cout<<"Enter No : ";
	cin>>n;
	cout<<endl;

	for(i=0;i<n;i++)
	{
		cout<<"Enter Data : ";
		cin>>a[i];
	}
}
void myarray :: display()
{
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
void myarray :: sort_asc()
{
	cout<<"sort_asc"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
		cout<<a[i]<<endl;
	}
	cout<<"-----------------------------------"<<endl;
}
void myarray :: sort_des()
{
	cout<<"sort_des"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
		cout<<a[i]<<endl;
	}
	cout<<"-----------------------------------"<<endl;
}
void main()
{
	clrscr();
	myarray m;
	int ch;
	m.getdata();
	m.display();
	while(1)
	{
		cout<<endl;
		cout<<"1. ascending order "<<endl;
		cout<<"2. descending order "<<endl;
		cout<<"3.exit "<<endl;

		cout<<"Enter Choice : ";
		cin>>ch;

		switch(ch)
		{
			case 1 :
				m.sort_asc();
				break;
			case 2 :
				m.sort_des();
				break;
			case 3 :
				exit(0);
				break;
			default :
				cout<<"invalid ";
				break;
		}
	}
	getch();
}