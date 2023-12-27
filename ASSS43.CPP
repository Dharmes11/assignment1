#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
class student
{
	public :
	int no,i,cnt;
	char name[20];
	void read_data();
};
class marks : public student
{
	public :
	int m[5];
	void read_marks();
};
class result : public marks
{
	public :
	float total,per;
	char grade[20];
	void calc();
	void display();
};
void student :: read_data()
{
	cout<<endl;
	cout<<"Enter Student No : ";
	cin>>no;
	cout<<endl;

	cout<<"Enter Student Name : ";
	cin>>name;
	cout<<endl;
}
void marks :: read_marks()
{
	cout<<"Enter Marks Of 3 Subject ";
	cout<<endl;

	for(i=0;i<5;i++)
	{
		cout<<"Enter Student Marks "<<i+1<<" : ";
		cin>>m[i];
	}
}
void result :: calc()
{
	total=0;
	per=0;

	for(i=0;i<5;i++)
	{
		if(m[0]>30 && m[1]>30 && m[2]>30 && m[3]>30 && m[4]>30)
		{
			total=total + m[i];
			per=total/5;
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
		strcpy(grade,"FAIL");
	}
	if(cnt==0)
	{
		if(per>=70)
		{
			strcpy(grade,"A");
		}
		else if(per<70 && per>=60)
		{
			strcpy(grade,"B");
		}
		else if(per<60 && per>=50)
		{
			strcpy(grade,"C");
		}
		else if(per<50 && per>=30)
		{
			strcpy(grade,"D");
		}
	}
}
void result :: display()
{
	cout<<endl;
	cout<<no<<setw(10)<<name<<setw(7)<<setw(7)<<m[0]<<setw(5)<<m[1]<<setw(5)<<m[2]<<setw(5)<<m[3]<<setw(5)<<m[4]<<setw(6)<<total<<setw(7)<<per<<setw(5)<<grade;
}
void main()
{
	clrscr();
	result r[10];
	int i,n,j;

	cout<<endl;
	cout<<"Enter For N Number Of Student ";
	cin>>n;

	for(i=0;i<n;i++)
	{
		r[i].read_data();
		r[i].read_marks();
		r[i].calc();
	}
	cout<<endl;
	cout<<"                  MARKSHEET                    "<<endl;
	cout<<"NUMBER   NAME   M1   M2   M3   M4   M5   TOTAL   %   RESULT "<<endl;
	cout<<"======   ====   ==   ==   ==   ==   ==   =====   ==  ====== "<<endl;

	for(j=0;j<n;j++)
	{
		r[j].display();
	}
	getch();
}







