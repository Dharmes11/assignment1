#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>
class string
{
	public :
		char s1[20];
		void reverse();
		void upper();
		void lower();
		void length();
};
void string :: reverse()
{
	cout<<"Enter String : ";
	cin>>s1;
	cout<<endl;
	cout<<"-----------------------------------------";
	cout<<endl;

	cout<<"Reverse String : "<<strrev(s1)<<endl;
}
void string :: upper()
{
	cout<<"Enter String : ";
	cin>>s1;
	cout<<endl;
	cout<<"-----------------------------------------";
	cout<<endl;

	cout<<"upper String : "<<strupr(s1)<<endl;
}
void string :: lower()
{
	cout<<"Enter String : ";
	cin>>s1;
	cout<<endl;
	cout<<"-----------------------------------------";
	cout<<endl;

	cout<<"Upper String : "<<strlwr(s1)<<endl;
}
void string :: length()
{
	cout<<"Enter String : ";
	cin>>s1;
	cout<<endl;
	cout<<"-----------------------------------------";
	cout<<endl;

	cout<<"Length String : "<<strlen(s1)<<endl;
}
void main()
{
	clrscr();
	string s;
	int ch;

	cout<<"1.Reverse String "<<endl;
	cout<<"2.Upper String "<<endl;
	cout<<"3.Lower String "<<endl;
	cout<<"4.Length String "<<endl;
	cout<<"5.exit "<<endl;

	cout<<"Enter Choice : ";
	cin>>ch;

	switch(ch)
	{
		case 1 :
			s.reverse();
			break;
		case 2 :
			s.upper();
			break;
		case 3 :
			s.lower();
			break;
		case 4 :
			s.length();
			break;
		case 5 :
			exit(0);
			break;
		default :
			cout<<"invalid";
			break;
	}
	getch();
}