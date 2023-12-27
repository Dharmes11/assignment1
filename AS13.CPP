#include<iostream.h>
#include<conio.h>
class person
{
	public:
	int age;
	char name[20],city[20];
	void getdata();
	void printdata();
};
void person :: getdata()
{
	cout<<"Enter Your Name :";
	cin>>name;
	cout<<endl;
	cout<<"Enter Your Age :";
	cin>>age;
	cout<<endl;
	cout<<"Enter Your City :";
	cin>>city;
	cout<<endl;
}
void person :: printdata()
{
	cout<<"----------Person Details------------";
	cout<<endl<<endl;
	cout<<"NAME : "<<name<<endl<<endl;
	cout<<"AGE : "<<age<<endl<<endl;
	cout<<"CITY : "<<city<<endl;
}
void main()
{
	clrscr();
	person p;
	p.getdata();
	p.printdata();
	getch();
}








