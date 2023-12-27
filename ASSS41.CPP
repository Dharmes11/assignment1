#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
class student
{
	public:
		int no,m[7],i,cnt;
		char name[20];
		void getdata();
};
class result : public student
{
	public :
		int tot;
		float per;
		char grade[20];
		void calc();
		void display();
};
void student :: getdata()
{
	cout<<"Enter Student No :";
	cin>>no;
	cout<<endl;

	cout<<"Enter Student Name :";
	cin>>name;
	cout<<endl;

	for(i=0;i<5;i++)
	{
		cout<<"Enter Student Marks "<<i+1<<" : ";
		cin>>m[i];
		cout<<endl;
	}
}
void result :: calc()
{
	tot=0;
	per=0;

	for(i=0;i<5;i++)
	{
		if(m[i]>30)
		{
			tot=tot+m[i];
			per=tot/5;
		}
	}

	cnt=0;
	for(i=0;i<5;i++)
	{
		if(m[i]<30)
		{
			cnt++;
		}
	}
	if(cnt>=1)
	{
		strcpy(grade,"fail");
	}
	if(cnt==0)
	{
		if(per>=70)
		{
			strcpy(grade,"A");
		}
		else if(per>60 && per <70)
		{
			strcpy(grade,"B");
		}
		else if(per>50 && per <=60)
		{
			strcpy(grade,"C");
		}
		else if(per>30 && per <=50)
		{
			strcpy(grade,"D");
		}
	}
}
void result :: display()
{
	cout<<no<<setw(5)<<name<<setw(5)<<m[0]<<setw(5)<<m[1]<<setw(5)
	<<m[2]<<setw(5)<<m[3]<<setw(5)<<m[4]<<setw(5)<<tot<<setw(5)
	<<per<<setw(5)<<grade<<setw(5)<<endl;
}
void main()
{
	clrscr();
	result r[10];
	int n,j;
	cout<<"Enter no Of Student : ";
	cin>>n;
	cout<<endl;
	for(j=0;j<n;j++)
	{
		r[j].getdata();
		r[j].calc();
	}
	cout<<endl;
	cout<<"                     MARKSHEET                             "<<endl;
	cout<<"NUMBER   NAME   M1   M2   M3   M4   M5   TOTAL   %   RESULT"<<endl;
	cout<<"======   ====   ==   ==   ==   ==   ==   =====   ==  ======"<<endl;

	for(j=0;j<n;j++)
	{
		r[j].display();
	}

	getch();

}




