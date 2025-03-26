#include<iostream>
#include<conio.h>
using namespace std;
class data
{
	      public:
	      	 int n,r,arm,k;
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
	      		k=n;
	      		while(n>0)
	      		{
	      			r=n%10;
	      			arm=arm+(r*r*r);
	      			n=n/10;
				}
				if(arm==k)
				{
					cout<<"THIS IS ARMSTRONG NUMBER="<<k;
					
				}
				else
				{
					cout<<"THIS IS NOT ARMSTRONG NUMBER="<<k;
				}
	      		
			}
};
main()
{
	        arms p;
	        p.input();
	        p.output();
}
