#include<iostream>
using namespace std;
class data
{
	    public:
	    	int a;
};
class info:virtual public data
{
	   public:
	   	void input()
	   	{
	   		cout<<"A=";
	   		cin>>a;
		   }
};
class add:virtual public data
{
	     public:
	     	int b;
	     	void input1()
	     	{
	     		cout<<"B=";
	     		cin>>b;
			 }
};
class out:public info,public add
{
	     public:
	     	int sum;
	     	void output()
	     	{
	     		sum=a+b;
	     		cout<<"sum="<<sum;
			 }
 };
 main()
 {
 	  out p;
 	  p.input();
 	  p.input1();
 	  p.output();
  } 
