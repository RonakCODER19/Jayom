#include<iostream>
using namespace std;
class data
{
	      public:
	      	int a;
	      	void input()
	      	{
	      		cout<<"A=";
	      		cin>>a;
			  }
};
class info:public data
{
	      public:
	      	int b;
	      	void input1()
	      	{
	      		cout<<"B=";
	      		cin>>b;
			  }
};
class child:public info
{
	       public:
	       	int sum;
	       	child()
	       	{
	       		sum=0;
		    }
		    void output()
		    {
		    	sum=a+b;
		    	cout<<"sum="<<sum;
			}
};
main()
{
	     child p;
	     p.input();
	     p.input1();
	     p.output();
}
