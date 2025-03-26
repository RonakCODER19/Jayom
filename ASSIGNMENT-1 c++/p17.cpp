#include<iostream>
#include<string.h>
using namespace std;
class product
{
	       public:
	       	int code;
	       	char name[30];
	       	void input()
	       	{
	       	      cout<<"ENTER THE PRODUCT CODE=";
				  cin>>code;
				  cout<<"ENTER THE PRODUCT NAME=";
				  fflush(stdin);
				  gets(name);	
			}
};
class stock:public product
{
	     public:
	     	int pr,pu;
	     	void input1()
	     	{
	     		cout<<"HOW MANY PRODUCT ARE SALE=";
	     		cin>>pr;
	     		cout<<"HOW MANY PRODUCT ARE PURCHASE=";
	     		cin>>pu;
			 }
};
class purchase:public stock
{
	       public:
	       	void output()
	       	{
	       		cout<<"PRODUCT CODE="<<code<<endl;
				  cout<<"PRODUCT NAME=";
				  puts(name);
				  cout<<endl;
				  cout<<"PRODUCT ARE SALE="<<pr<<endl;
	     		 	
		    }
};
