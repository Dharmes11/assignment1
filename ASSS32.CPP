#include<iostream.h>
#include<conio.h>
class cricketer
{
	public:
		char name[20],country[20],type[20];
		int age,tot_match,tot_run,tot_wicket;

		void assign();
		void getdata();
		void display();

};
void cricketer :: assign()
{
	tot_match=0;
	tot_run=0;
	tot_wicket=0;
}
void cricketer :: getdata()
{
	cout<<"Enter  Name :";
	cin>>name;
	cout<<endl;

	cout<<"Enter  Age :";
	cin>>age;
	cout<<endl;

	cout<<"Which Country He Played :";
	cin>>country;
	cout<<endl;

	cout<<"Type Of Cricketer(Bat/Bow) :";
	cin>>type;
	cout<<endl;

	cout<<"Total Matches He Has Played :";
	cin>>tot_match;
	cout<<endl;

	cout<<"Total Run He has Played :";
	cin>>tot_run;
	cout<<endl;

	cout<<"Total Wickets He has Taken :";
	cin>>tot_wicket;
	cout<<endl;
}
void cricketer :: display()
{
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"                   CRICKETER DETAILS                   "<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"NAME : "<<name<<endl;
	cout<<"AGE : "<<age<<endl;
	cout<<"COUNTRY : "<<country<<endl;
	cout<<"TYPE : "<<type<<endl;
	cout<<"TOTAL MATCHES : "<<tot_match<<endl;
	cout<<"TOTAL RUNS : "<<tot_run<<endl;
	cout<<"TOTAL WICKETS : "<<tot_wicket<<endl;
	cout<<"-------------------------------------------------------"<<endl;

}
void main()
{
	clrscr();
	cricketer c[10];
	int i,n;
	cout<<"Enter No Of Cricketer : "<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		c[i].assign();
		c[i].getdata();
	}
	for(i=0;i<n;i++)
	{
		c[i].display();
	}

	getch();

}






