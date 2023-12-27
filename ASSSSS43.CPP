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
		float tot,per;
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
	for(i=0;i<5;i++)
	{
		cout<<"Enter Marks "<<i+1<<" : ";
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
		if(m[i]>=30)
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
		else if(per>=60 && per<70)
		{
			strcpy(grade,"B");
		}
		else if(per>=50 && per<60)
		{
			strcpy(grade,"C");
		}
		else if(per>=30 && per<50)
		{
			strcpy(grade,"D");
		}
	}
}
void result :: display()
{
	cout<<endl;
	cout<<no<<setw(7)<<name<<setw(7)<<m[0]<<setw(7)<<m[1]<<setw(7)
	<<m[2]<<setw(7)<<m[3]<<setw(7)<<m[4]<<setw(7)<<tot<<setw(7)
	<<per<<setw(7)<<grade<<setw(7)<<endl;
}
void main()
{
	clrscr();
	result r[20];
	int i,j,n;

	cout<<endl;
	cout<<"Enter No of Student : ";
	cin>>n;
	cout<<endl;

	for(i=0;i<n;i++)
	{
		r[i].read_data();
		r[i].read_marks();
		r[i].calc();
	}
	cout<<endl;
	cout<<"                       MARKSHEET                           "<<endl;
	cout<<"NUMBER   NAME   M1   M2   M3   M4   M5   TOTAL   %   RESULT"<<endl;

	for(j=0;j<n;j++)
	{
		r[j].display();
	}

	getch();
}








