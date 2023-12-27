#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
int mp=0,ma=0,mf=0,fa=0,fp=0,ff=0;
class student
{
	public :
	int no,s_code,m[6],cnt,i;
	char name[10],cls[10];
	float tot,per;

	void read();
	void calc();
	void display();
};
void student :: read()
{
	cout<<endl;
	cout<<"Enter Student No :";
	cin>>no;
	cout<<endl;
	cout<<"Enter Student Name :";
	cin>>name;
	cout<<endl;
	cout<<"Enter Gender(1.male/2.female) :";
	cin>>s_code;
	tot=0.0;
	per=0.0;

	for(i=0;i<6;i++)
	{
		cout<<endl;
		cout<<"Enter Marks "<<i+1<<" : ";
		cin>>m[i];
	}

	for(i=0;i<6;i++)
	{
		if(m[0]>35 && m[1]>35 && m[2]>35 &&m[3]>35 && m[4]>35 && m[5]>35)
		{
			tot=tot+m[i];
			per=tot/6;
		}
	}
}
void student :: calc()
{
	cnt=0;
	if(s_code==1)
	{
		for(i=0;i<6;i++)
		{
			if(m[i]<35)
			{
				cnt++;
			}
		}
		if(cnt>2)
		{
			strcpy(cls,"FAIL");
			mf++;
		}
		if(cnt==1 || cnt==2)
		{
			strcpy(cls,"ATKT");
			ma++;
		}
		if(cnt==0)
		{
			if(per<48)
			{
				strcpy(cls,"PASS");
				mp++;
			}
			if(per>=48 && per<60)
			{
				strcpy(cls,"SECOND");
				mp++;
			}
			if(per>=60 && per<70)
			{
				strcpy(cls,"FIRST");
				mp++;
			}
			if(per>=70 )
			{
				strcpy(cls,"DISTINCTION");
				mp++;
			}
		}
	}
	if(s_code==2)
	{
		for(i=0;i<6;i++)
		{
			if(m[i]<35)
			{
				cnt++;
			}
		}
		if(cnt>2)
		{
			strcpy(cls,"FAIL");
			ff++;
		}
		if(cnt==1 || cnt==2)
		{
			strcpy(cls,"ATKT");
			fa++;
		}
		if(cnt==0)
		{
			if(per<48)
			{
				strcpy(cls,"PASS");
				fp++;
			}
			if(per>=48 && per<60)
			{
				strcpy(cls,"SECOND");
				fp++;
			}
			if(per>=60 && per<70)
			{
				strcpy(cls,"FIRST");
				fp++;
			}
			if(per>=70)
			{
				strcpy(cls,"DISTINCTION");
				fp++;
			}
		}
	}
}
void student :: display()
{
	cout<<endl;
	cout<<no<<setw(7)<<name<<setw(7)<<m[0]<<setw(7)<<m[1]<<setw(7)<<m[2]
	<<setw(7)<<m[3]<<setw(7)<<m[4]<<setw(7)<<m[5]<<setw(7)
	<<tot<<setw(7)<<per<<setw(7)<<cls<<endl;

}
void main()
{
	clrscr();
	student s[10];
	int j,n;
	cout<<"Enter No Of Student :";
	cin>>n;

	for(j=0;j<n;j++)
	{
		s[j].read();
		s[j].calc();
	}
	cout<<endl;
	cout<<"                              STUDENT MARKSHEET                           "<<endl;
	cout<<"                              #################                           "<<endl;
	cout<<"NUMBER   NAME   SUB1   SUB2   SUB3   SUB4   SUB5   SUB6   TOTAL   PER   RESULT"<<endl;
	cout<<"------   ----   ----   ----   ----   ----   ----   ----   -----   ---   ------"<<endl;

	for(j=0;j<n;j++)
	{
		s[j].display();
	}
	cout<<"------   ----   ----   ----   ----   ----   ----   ----   -----   ---   ------"<<endl;
	cout<<"Sr.No   Result   Male   Female   Total"<<endl;
	cout<<"1."<<"\tPass:"<<setw(7)<<mp<<setw(7)<<fp<<setw(7)<<mp+fp<<endl;
	cout<<"2."<<"\tFail:"<<setw(7)<<mf<<setw(7)<<ff<<setw(7)<<mf+ff<<endl;
	cout<<"3."<<"\tATKT:"<<setw(7)<<ma<<setw(7)<<fa<<setw(7)<<ma+fa<<endl;

	getch();
}










