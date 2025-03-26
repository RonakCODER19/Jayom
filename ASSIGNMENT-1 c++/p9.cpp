#include<iostream>
#include<string.h>
using namespace std;
int basicsalary;
class employee
{
	       public:
	       	char name[30],name1[30];
	       	int age;
	       	void input()
	       	{
	       		cout<<"ENTER THE EMPLOYEE NAME=";
	       		gets(name);
	       		cout<<"ENTER THE EMPLOYEE AGE=";
	       		cin>>age;
	       		cout<<"ENTER THE DESIGNATION=";
	       		fflush(stdin);
	       		gets(name1);
	       		
			}
};
class salary:virtual public employee
{
	         public:
	         	void input1()
	         	{
	         		 cout<<"ENTER THE BASIC SALARY=";
	         		 cin>>basicsalary;
				 }
};
class allowance:virtual public employee
{
	       public:
	       	int ta,da,hra,pf,bonus;
	       	void input2()
	       	{
	       		 cout<<"ENTER THE TAVELL ALLOWANCE=";
	       		 cin>>ta;
	       		 cout<<"ENTER THE DRIVING ALLOWANCE=";
	       		 cin>>da;
	       		 cout<<"ENTER THE HOUSE RATE=";
	       		 cin>>hra;
	       		 cout<<"ENTER THE PROVIDENT FUND=";
	       		 cin>>pf;
	       		 cout<<"ENTER THE BOUNUS=";
	       		 cin>>bonus;
			   }
			   
			
};
class salarycount:public salary,public allowance
{
	       public:
	       	int netsalary;
	       	void input3()
	       	{
	       		netsalary=basicsalary+ta+da+hra-pf+bonus;
			}
			void output()
			{
				cout<<endl;
				cout<<endl;
			   	cout<<"EMPLOYEE NAME=";
				puts(name);
				cout<<endl;
				cout<<"EMPLOYEE AGE="<<age<<endl;
				cout<<"EMPLOYEE DESIGNATION=";
				puts(name1);
				cout<<endl;
				cout<<"TRAVELING ALLOWANCE="<<ta<<endl;
				cout<<"DRIVING ALLOWANCE="<<da<<endl;
				cout<<"HOUSE RATE ALLOWANCE="<<hra<<endl;
				cout<<"PROVIDANT FUND ALLOWANCE="<<pf<<endl;
				cout<<"BONUS ALLOWANCE="<<bonus<<endl;
				cout<<"NET SALARY="<<netsalary;
			}
};
main()
{
	    salarycount p;
	    p.input();
	    p.input1();
	    p.input2();
	    p.input3();
	    p.output();
}
