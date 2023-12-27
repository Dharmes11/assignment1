#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
class string
{
	public :
	char s[20];
	void reverse();
	void upper();
	void lower();
	void length();
};
void string :: reverse()
{
	cout<<"Enter String : ";
	cin>>s;
	cout<<endl<<endl;
	cout<<"----------------------"<<endl<<endl;
	cout<<"Reverse String : "<<strrev(s)<<endl;
}
void string :: upper()
{
	cout<<"Enter String : ";
	cin>>s;
	cout<<endl<<endl;
	cout<<"----------------------"<<endl<<endl;
	cout<<"Upper String : "<<strupr(s)<<endl;
}
void string :: lower()
{
	cout<<"Enter String : ";
	cin>>s;
	cout<<endl<<endl;
	cout<<"----------------------"<<endl<<endl;
	cout<<"Lower String : "<<strlwr(s)<<endl;
}
void string :: length()
{
	cout<<"Enter String : ";
	cin>>s;
	cout<<endl<<endl;
	cout<<"----------------------"<<endl<<endl;
	cout<<"Length String : "<<strlen(s)<<endl;
}
void main()
{
	clrscr();
	string s;
	int ch;
	cout<<"1. Reverse String "<<endl;
	cout<<"2. Upper String "<<endl;
	cout<<"3. Lower String "<<endl;
	cout<<"4. Length String "<<endl;
	cout<<"5. Exit "<<endl;
	cout<<"Enter Your Choice (1-5) : ";
	cin>>ch;
	cout<<endl;
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
			cout<<"invalid ";
			break;
	}
	getch();

}