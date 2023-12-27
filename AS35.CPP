#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
class student
{
	public :
	int no,m[6],i,cnt,s_code;
	char name[20];
	float tot,per;
	void getdata();
	void calc();
	void printdata();
};
void student :: getdata()
{
	cout<<"enter student no :";
	cin>>no;
	cout<<endl;
	cout<<"enter student name :";
	cin>>name;
	cout<<endl;
	cout<<"enter student gender(1.male 2.female) :";
	cin>>s_code;
	cout<<endl;
	tot=0.0;
	per=0.0;
	for(i=0;i<5;i++)
	{
		cout<<"enter student marks "<<i+1<<" : ";
		cin>>m[i];
	}
	if(m[0]>35&&m[1]>35&&m[2]>35&&m[3]>35&&m[4]>35)
	{
		tot=tot+m[i];
		per=tot/5;
	}

}



