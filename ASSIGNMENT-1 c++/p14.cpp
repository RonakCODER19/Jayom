#include<iostream>
#include<string.h>
using namespace std;
class furniture
{
      public:
      	char color[30];
      	int wei,high;
      	void input()
      	{
      		cout<<"ENTER THE FURNITURE WITH COLOR NAME=";
      		gets(color);
      		cout<<"ENTER THE WIDTH=";
      		cin>>wei;
      		cout<<"ENTER THE HIGHT=";
      		cin>>high;
		  }
	  	
};
class shelf:public furniture
{
	     public:
	     	int no;
	     	void input()
	     	{
	     		cout<<"ENTER THE HOW MANY SHELVESLS=";
	     		cin>>no;
			 }
	     	void output()
	     	{
	     		cout<<endl;
	     		cout<<endl;
	     	    cout<<" FURNITURE WITH COLOR NAME=";
      		    puts(color);
      		    cout<<endl;
      		    cout<<" WIDTH="<<wei<<"INCH"<<endl;
      	    	cout<<" HIGHT="<<high<<"INCH"<<endl;
      	    	cout<<"HOW MANY SHELVESLS="<<no;
      		   	
			 }
};
main()
{
	   shelf p;
	   p.input();
	   p.output();
}
