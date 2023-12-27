#include<iostream.h>
#include<conio.h>
class emp
{
	public :
	int eno;
	char ename[20];
	float esal;
	emp();
	void display();
};
emp :: emp()
{
	cout<<"Enter Employee No : ";
	cin>>eno;
	cout<<endl;
	cout<<"Enter Employee Name : ";
	cin>>ename;
	cout<<endl;
	cout<<"Enter Employee Salary : ";
	cin>>esal;
	cout<<endl;
}
void emp :: display()
{
	cout<<"--------Employee Information---------"<<endl<<endl;
	cout<<"Employee No : "<<eno<<endl<<endl;
	cout<<"Employee Name : "<<ename<<endl<<endl;
	cout<<"Employee Salary : "<<esal;
}
void main()
{
	clrscr();
	emp e;
	e.display();
	getch();
}