#include<iostream>
#include<conio.h>
using namespace std;
class data
{
	      public:
	      	int n,r,rev;
	     
	     data()
	     {
	     	 rev=0;
		 }
		 void input()
		 {
		 	cout<<"n=";
		 	cin>>n;
		 }
};
class reve:public data
{
	    public:
	    void output()
	    {
		
	        while(n>0)
	       {
	         	r=n%10;
	        	rev=rev*10+r;
	         	n=n/10;
		    }
		    cout<<"rev="<<rev;
		    
	    }
};
main()
{
	         reve p;
	         p.input();
	         p.output();
}
