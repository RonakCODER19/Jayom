#include<iostream>
using namespace std;
class data
{
	  public:
	  	int a,b,sum;
	  	void input()
	  	{
	  		cout<<"A=";
	  		cin>>a;
	  		cout<<"B=";
	  		cin>>b;
		  }
};
class info:public data
{
	     public:
	     	void output()
	     	{
	     		sum=a+b;
	     		cout<<"SUM="<<sum;
			 }
};
main()
{
	    info p;
	    p.input();
	    p.output();
}
