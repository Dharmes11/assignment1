#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
long int t,r=0,temp;
char *nm;
class employee
{
	public :
		int no,hra,pt,code;
		char name[20],
		float sal,da,gs,it,td,ns;
		void read();
		void getdata();
		void display();
};
void employee :: read()
{
	cout<<"Enter Employee No :";
	cin>>no;
	cout<<endl;
	cout<<"Enter Employee Name :";
	cin>>name;
	cout<<endl;
	cout<<"Enter Employee Salary :";
	cin>>sal;
	cout<<endl;
	cout<<"Enter Employee Code(0-3) :";
	cin>>code;
	cout<<endl;
}
void employee :: calc()
{
	if(sal<=1500)
	{
		da=sal*1.59;
	}
	else if(sal>1500 && sal<=2500)
	{
		da=sal*1.48;
	}
	else if(sal>2500 && sal<=4500)
	{
		da=sal*1.25;
	}
	else if(sal>4500)
	{
		da=sal*.90;
	}
	if(code==0)
	{
		hra=0;
	}
	else if(code==1)
	{
		hra=120;
	}
	else if(code==2)
	{
		hra=250;
	}
	else if(code==3)
	{
		hra=400;
	}
	gs=da+hra+sal;
	it=gs*0.10;
	pt=80;
	td=it-pt;
	ns=gs-td;
}


