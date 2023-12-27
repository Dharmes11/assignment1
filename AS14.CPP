#include<iostream.h>
#include<conio.h>
class student
{
	public :
	int no,m1,m2,m3;
	char name[20];
	float per,tot;
	void getdata();
	void calc();
	void printdata();
};
void student :: getdata()
{
	cout<<"--------Enter Student Information--------"<<endl;
	cout<<"Enter Student No : ";
	cin>>no;
	cout<<endl;
	cout<<"Enter Student Name : ";
	cin>>name;
	cout<<endl;
	cout<<"Enter Student Marks1 : ";
	cin>>m1;
	cout<<endl;
	cout<<"Enter Student Marks2 : ";
	cin>>m2;
	cout<<endl;
	cout<<"Enter Student Marks3 : ";
	cin>>m3;
	cout<<endl;
}
void student :: calc()
{
	tot=m1+m2+m3;
	per=tot/3;
}
void student :: printdata()
{
	cout<<"--------Student Information---------"<<endl<<endl;
	cout<<"Student Number : "<<no<<endl<<endl;
	cout<<"Student Name : "<<name<<endl<<endl;
	cout<<"Marks 1 : "<<m1<<endl<<endl;
	cout<<"Marks 2 : "<<m2<<endl<<endl;
	cout<<"Marks 3 : "<<m3<<endl<<endl;
	cout<<"Total : "<<tot<<endl<<endl;
	cout<<"Percentage : "<<per<<endl<<endl;
}
void main()
{
	clrscr();
	student s;
	s.getdata();
	s.calc();
	s.printdata();
	getch();
}










