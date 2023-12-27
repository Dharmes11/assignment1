#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int qs=0;
float r=0.0,a=0.0,com=0.0;
class salesman
{
	public :
		int no,qty_sold;
		float rate,amt,comm;

		void getdata();
		void calc();
		void display();
};
void salesman :: getdata()
{
	cout<<"Enter Salesman No : ";
	cin>>no;
	cout<<endl;

	cout<<"Enter Quantity Sold : ";
	cin>>qty_sold;
	cout<<endl;

	cout<<"Enter Quantity Rate : ";
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
	cout<<no<<setw(7)<<qty_sold<<setw(7)<<rate<<setw(7)<<amt<<setw(7)
	<<comm<<setw(7)<<endl;
}
void main()
{
	clrscr();
	salesman s[10];
	int n,i;

	cout<<"Enter No Of Salesman : ";
	cin>>n;
	cout<<endl;

	for(i=0;i<n;i++)
	{
		s[i].getdata();
		qs=qs+s[i].qty_sold;
		r=r+s[i].rate;
	}
	cout<<endl;
	cout<<"                   ABC COMPANY                            "<<endl;
	cout<<"                Salesman Information                      "<<endl;
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"Salesman no.   Quantity sold   Rate   Amount   Commission "<<endl;
	cout<<"----------------------------------------------------------"<<endl;
	for(i=0;i<n;i++)
	{
		s[i].calc();
		s[i].display();
	}
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"TOTAL :"<<qs<<setw(7)<<r<<setw(7)<<a<<setw(7)<<com<<endl;
	cout<<"----------------------------------------------------------"<<endl;

	getch();

}





