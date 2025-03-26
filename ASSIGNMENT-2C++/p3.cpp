#include<iostream>
using namespace std;
class data
{
	     public: 
	     int i,k,c,j;
	     void even(int n)
	     {
	     	  k=n;
	     	  cout<<"EVEN NUMBER=";
	     	  for(i=1;i<=n;i++)
	     	  	    if(i%2==0)
	     	  	    {
	     	  	    	 cout<<" "<<i;
					   }
			  
		 }
	     void even()
		 {
		 	
		 	  cout<<endl<<"PRIME NUMBER=";
		 	   for(i=2;i<=k;i++)
		 	   {
		 	   	  c=1;
		 	   	    for(j=2;j<i;j++)
		 	   	    {
						
		 	   	       if(i%j==0)
		 	   	       {
		 	   	       	  c=0;
					   }
				    }
			
					   if(c)
					   {
					   	   cout<<" "<<i;
					   }
				   
			   }
		 }
};
main()
{
	      data p;
	      int n;
	      cout<<"N=";
	      cin>>n;
	      p.even(n);
	      p.even();
} 
