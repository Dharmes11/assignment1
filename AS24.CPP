#include<iostream.h>
#include<conio.h>
#include<process.h>
class fact
{
	public:
	int i,n,fact;
	fact();
	void for_loop();
	void do_while_loop();
	void while_loop();
};
fact :: fact()
{
	i=1;
	fact=1;
}
void fact :: for_loop()
{
	cout<<"Enter Value Of N :";
	cin>>n;
	cout<<endl;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"Fact : "<<fact<<endl;
}
void fact :: do_while_loop()
{
	cout<<"Enter Value Of N :";
	cin>>n;
	cout<<endl;
	do
	{
		fact=fact*i;
		i++;
	}
	while(i<=n);
	cout<<"Fact : "<<fact<<endl;
}
void fact :: while_loop()
{
	cout<<"Enter Value Of N :";
	cin>>n;
	cout<<endl;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	cout<<"Fact : "<<fact<<endl;
}
void main()
{
	clrscr();
	int ch;
	fact f;
	cout<<"1.Factorial Using For "<<endl;
	cout<<"2.Factorial Using do_while "<<endl;
	cout<<"3.Factorial Using while "<<endl;
	cout<<"4.Exit"<<endl;
	cout<<"enter your choice : ";
	cin>>ch;
	cout<<endl;
	switch(ch)
	{
		case 1 :
			f.for_loop();
			break;
		case 2 :
			f.do_while_loop();
			break;
		case 3 :
			f.while_loop();
			break;
		case 4 :
			exit(0);
			break;
		default :
			cout<<"invalid ";
			break;
	}
	getch();

}




