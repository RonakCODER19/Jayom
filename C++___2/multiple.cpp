#include<iostream>
#include<conio.h>
using namespace std;
class father
{
	       public:
	       	int a;
	       	void input()
	       	{
	       		cout<<"a=";
	       		cin>>a;
			}
};
class mother
{
	   public:
	   	int b;
	   	void input1()
	   	{
	   		cout<<"b=";
	   		cin>>b;
		   }
};
class child:public father,public mother
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
	      child p;
	      p.input();
	      p.input1();
	      p.output();
	      getch();
}
