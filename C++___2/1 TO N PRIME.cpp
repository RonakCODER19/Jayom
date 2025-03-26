#include<iostream>
#include<conio.h>
using namespace std;
class data
{
	       public:
	       	int n,i;
	       	void input(int n)
	       	{
	       	    this->n=n;
				   	
			}
			void output()
			{   int c=0;
				  for(i=2;i<=n;i++)
				  {
				  	  if(n%i==0)
				  	  {
				  	  	  
				     }
				  }
				  cout<<" "<<i;
				  
			}
};
main()
{
	     data p;
	     int n;
	     cout<<"ENTER THE ANY NUMBER=";
	     cin>>n;
	     p.input(n);
	     p.output();
}
