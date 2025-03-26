#include<iostream>
#include<string.h>
using namespace std;
class book
{
	       public:
	      int bookid,bookcost;
	      char name[30];
	      void input()
	      {
	      	  cout<<"ENTER THE BOOK ID=";
	      	  cin>>bookid;
	      	  cout<<"ENTER THE BOOK NAME=";
	      	  fflush(stdin);
	      	  gets(name);
	      	  cout<<"ENTER THE BOOK COST=";
	      	  cin>>bookcost;
	      	  
		  }
	     
		  
};
class wholesaler:virtual public book
{
	      public:
	      	int w_sale,sale_price1,p1,total;
	      	void input1()
	      	{
	      		 cout<<"HOW MANY ARE BOOK SALE=";
	      		 cin>>w_sale;
	      		 cout<<"HOW MANY SALE PRICE=";
	      		 cin>>sale_price1;
	      		 p1=(sale_price1-bookcost)*w_sale;
	      		 total=sale_price1*w_sale;
	      		 
			  }
};
class retailer:virtual public book
{
	      public:
	      	int s_sales,sale_price2,p2,total1;
	      	void input2()
	      	{
	      		 cout<<"HOW MANY ARE BOOK PURCHASE=";
	      		 cin>>s_sales;
	      		 cout<<"HOW MANY PURCHASE PRICE=";
	      		 cin>>sale_price2;
	      		 p2=(sale_price2-bookcost)*s_sales;
	      		 total1=sale_price2*s_sales;
			  }
};
class totalsales:public wholesaler,public retailer
{
	         public:
	         	int tot_sales,tot_amt,profit;
	         	void input3()
	         	{
	         		tot_sales=w_sale+s_sales;
	         		tot_amt=total+ total1;
	         		profit=p1+p2;
				 }
				 void output()
				 {
				 	cout<<endl;
				 	cout<<endl;
				 	 cout<<"ENTER THE BOOK ID="<<bookid<<endl;
	      	         cout<<"ENTER THE BOOK NAME=";
	      	         puts(name);
	      	         cout<<endl;
	      	         cout<<"ENTER THE BOOK COST="<<bookcost<<endl;
	      	         cout<<"HOW MANY ARE BOOK SALE="<<w_sale<<endl;
	      		     cout<<"HOW MANY SALE PRICE="<<sale_price1<<endl;
	      		     cout<<"HOW MANY ARE BOOK PURCHASE="<<s_sales<<endl;
	      		     cout<<"HOW MANY PURCHASE PRICE="<<sale_price2<<endl;
	      		     cout<<"TOTAL SALE BOOK="<<tot_sales<<endl;
	      		     cout<<"TOTAL AMOUNT="<<tot_amt<<endl;
	      		     cout<<"TOTAL PROFIT="<<profit;
				 }
};
main()
{
	 totalsales p;
	 p.input();
	 p.input1();
	 p.input2();
	 p.input3();
	 p.output();        
}
