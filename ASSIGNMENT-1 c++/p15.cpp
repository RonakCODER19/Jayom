#include<iostream>
#include<string.h>
using namespace std;
class publisher
{
	      public:
	      	char name[30],title[30];
	      	void input()
	      	{
	      		cout<<"ENTER THE TITLE=";
	      		gets(title);
	      		cout<<"ENTER THE NAME=";
	      		gets(name);
		    }
};
class sale
{
	      public:
	      	int no;
	      	void input1()
	      	{
	      		cout<<"ENTER THE THREE MONTH SALE=";
	      		cin>>no;
			  }
};
class book:public publisher,public sale
{
	       public: 
	       int no1;
	       void input2()
	       {
	       	   cout<<"ENTER THE HOW MANY BOOK ARE SALE=";
	       	   cin>>no1;
		   }
		   void output()
		   {
		   	   cout<<endl;
		   	   cout<<endl;
		   	   cout<<" TITLE=";
	      		puts(title);
	      		cout<<endl;
	      		cout<<" NAME=";
	      		puts(name);
	      		cout<<endl;
	      		cout<<"THREE MONTH SALE="<<no<<endl;
		   	   cout<<"HOW MANY BOOK ARE SALE="<<no1<<endl;
		   }
		   
	       
};
class tape:public publisher,public sale
{
	          public:
	          	int no2;
	          	void input3()
	          	{
	          		cout<<"ENTER THE HOW MANY TAPE ARE SALE=";
	          		cin>>no2;
				  }
				  void output1()
				  {
				  	
				  	cout<<" HOW MANY TAPE ARE SALE="<<no2<<endl;
				  	
				  }
};
main()
{
	 book p;
	 tape q;
	 p.input();
	 p.input1();
	 p.input2();
	 q.input3();
	 p.output();
	 q.output1();   
}
