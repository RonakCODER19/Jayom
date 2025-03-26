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
class clerk:virtual public employee
{
	         public:
	         	int ex;
	         	void input1()
	         	{
	         		 cout<<"ENTER THE BASIC SALARY=";
	         		 cin>>basicsalary;
	         		 cout<<"TOTAL EXPERIENCE=";
	         		 cin>>ex;
				 }
};
class allowance:virtual public employee
{
	       public:
	       	int ta,da;
	       	void input2()
	       	{
	       		ta=(basicsalary*2)/100;
	       		da=(basicsalary*3)/100;
			 }
			   
			
};
class salarycount:public clerk,public allowance
{
	       public:
	       	int totalsalary,bonus;
	       	void input3()
	       	{
	       		bonus=(basicsalary*25)/100;
	       		totalsalary=basicsalary+ta+da+bonus;
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
				cout<<"BONUS ALLOWANCE="<<bonus<<endl;
				cout<<"TOTAL SALARY="<<totalsalary;
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
