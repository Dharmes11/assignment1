#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int qs=0;
float a=0.0,r=0,com=0;
class salesman
{
	public :
	int sno,qty_sold;
	float rate,comm,amt;
	void getdata();
	void calc();
	void display();
};
void salesman :: getdata()
{
	cout<<"Enter Salesman No : ";
	cin>>sno;
	cout<<endl;
	cout<<"Enter Quality Sold : ";
	cin>>qty_sold;
	cout<<endl;
	cout<<"Enter Rate : ";
	cin>>rate;
	cout<<endl;
}
void salesman :: calc()
{
	amt=qty_sold*rate;
	if(amt<=1000)
	{
		comm=0;
	}
	else if(amt>1000 && amt<=2000)
	{
		comm=amt*0.15;
	}
	else if(amt>2000 && amt<=4000)
	{
		comm=amt*0.20;
	}
	else if(amt>4000)
	{
		comm=amt*0.25;
	}
	a=a+amt;
	com=com+comm;
}
void salesman :: display()
{
	cout<<setw(5)<<sno<<setw(18)<<qty_sold<<setw(12)<<rate<<setw(10)<<amt<<setw(10)<<comm<<endl;
}
void main()
{
	clrscr();
	salesman s[25];
	int n,i;
	cout<<endl;
	cout<<"enter value of N :";
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i].getdata();
		qs=qs+s[i].qty_sold;
		r=r+s[i].rate;
	}
	cout<<endl;
	cout<<"                       ABC COMPANY                          "<<endl;
	cout<<"------------------------------------------------------------"<<endl;
	cout<<"salesman no   quntity sold     rate     amount    commision"<<endl;
	cout<<"------------------------------------------------------------"<<endl;
	for(i=0;i<n;i++)
	{
		s[i].calc();
		s[i].display();
	}
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"total : "<<setw(10)<<qs<<setw(12)<<r<<setw(10)<<a<<setw(10)<<com<<endl;
	cout<<"----------------------------------------------------------------------";
	getch();
}














