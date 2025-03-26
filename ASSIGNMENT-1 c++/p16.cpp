#include<iostream>
#include<string.h>
using namespace std;
class dept
{
	    public:
	    	int dept_code;
	    	char name[30],loc[30];
	    	void input()
	    	{
	    		cout<<"ENTER THE DEPARTMENT CODE=";
	    		cin>>dept_code;
	    		cout<<"ENTER THE DEPARTMENT NAME=";
	    		fflush(stdin);
	    		gets(name);
	    		cout<<"ENTER THE DEPARTMENT LOCATION=";
	    		gets(loc);
			}
};
class emp:public dept
{
	         public:
	         	int Emp_no,salary;
	         	char emp_name[30];
	         	void input1()
	         	{
	         		cout<<"ENTER THE EMPLOYEE NUMBER=";
	         		cin>>Emp_no;
	         		cout<<"ENTER THE EMPLOYEE NAME=";
	         		fflush(stdin);
	         		gets(emp_name);
	         		cout<<"ENTER THE SALARY=";
	         		cin>>salary;
				 }
				 void output()
				 {
				 	cout<<endl;
				 	cout<<endl;
				 	cout<<"DEPARTMENT CODE="<<dept_code<<endl;
				 	cout<<"DEPARTMENT NAME=";
				 	puts(name);
				 	cout<<endl;
				 	cout<<"DEPARTMENT LOCATION=";
				 	puts(loc);
				 	cout<<endl;
				 	cout<<"EMPLOYEE NUMBER="<<Emp_no<<endl;
				 	cout<<"EMPLOYEE NAME=";
				 	puts(emp_name);
				 	cout<<endl;
				 	cout<<"SALARY OF EMPLOYEE="<<salary;
				 }
};
main()
{
	  emp p;
	  p.input();
	  p.input1();
	  p.output();   
}
