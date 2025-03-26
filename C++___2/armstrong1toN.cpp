#include<iostream>
#include<conio.h>
using namespace std;
class data
{
	         public:
	         	int n,arm,k,i,r;
	         	data()
	         	{
	         		arm=0;
				 }
	         	void input()
	         	{
	         		cout<<"ENTER THE NUMBER=";
	         		cin>>n;
				 }
};
class arms:public data
{
	           public:
	           	void output()
	           	{
	           		for(i=1;i<=n;i++)
	           		{
	           			arm=0;
	           			k=i;
	           			while(k>0)
	           			{
	           			    r=k%10;
							 arm=arm+(r*r*r);
							 k=k/10;	
						}
						if(i==arm)
						{
							cout<<" "<<arm;
						}
					}
				   }
};
main()
{
	       arms p;
	       p.input();
	       p.output();
}
