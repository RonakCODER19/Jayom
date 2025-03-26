#include<iostream>
using namespace std;
class data
{
	       public:
	      int n,r,rev,k;
	     data()
	     {
	     	rev=0;
		 }
		  void input(int n)
		  {
		  	   this->n=n;
		  	   
		  	   while(n>0)
		  	   {
		  	       r=n%10;
				   rev=rev*10+r;
				   n=n/10; 	
			   }
			   cout<<"REV="<<rev;
		   } 
		   
		   void input()
		   {
		   	    k=n;
			   if(rev==k)
			   {
			   	   cout<<endl;
			   	   cout<<"ITS PALINDROME NUMBER";
			   }
			   else
			   {
			   	    cout<<endl;
			   	   cout<<"ITS NOT PALINDROME NUMBER";
			   }
			   
		   }
};
main()
{
	     int n;
	     data p;
	     cout<<"N=";
	     cin>>n;
	     p.input(n);
	     p.input();
	    
}
