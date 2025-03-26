#include<iostream>
using namespace std;
class data
{
	      public:
	      	int i,n,sp,j,k;
	      	void input()
	      	{
	      		cout<<"n=";
	      		cin>>n;
			  }
};
class infor:public data
{
	           public:
	           	void output()
	           	{
	           		k=n;
	           		 for(i=1;i<=n;i++)
	           		 {
	           		        for(sp=1;sp<=k;sp++)
							 {
							 	cout<<" ";
					   	     }	
							for(j=1;j<=i;j++)
							{
							      if(j==1||j==i)
							      {
								     cout<<" &";
							      }
							      else
							      {
							      	   cout<<"  ";
								  }
							   
							  } 
							 k--;
							  cout<<endl; 
						
							  
					 }
					 k=2;
					 for(i=n-1;i>=1;i--)
					 {
					 	      for(sp=1;sp<=k;sp++)
					 	      {
					 	      	cout<<" ";
							   }
							   for(j=1;j<=i;j++)
							   {
							   	    if(j==1||j==i)
							      {
								     cout<<" &";
							      }
							      else
							      {
							      	   cout<<"  ";
								  }
							   }
							   k++;
							   cout<<endl;
							   
					 }
			   }
};
main()
{
	       infor p;
	       p.input();
	       p.output();
}
