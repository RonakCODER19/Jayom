#include<iostream>
using namespace std;
class data
{
	       public:
	       	int a,b;
	       
			
			void max(int x,int y)
			{
				a=x;
				 b=y;
				   if(x<y)
				   {
				   	    cout<<"X IS MINI";
				   }
				   else
				   {
				   	   cout<<"Y IS MINI";
				   }
			}
			void max()
			{
				 
				  if(a>b)
				  {
				  	 cout<<endl;
				  	cout<<"X IS MAX";
				  }
				  else
				  {
				  	cout<<endl;
				  	cout<<"Y IS MAX";
				  }
			}
};
main()
{
	     data p;
	     int x,y;
	     cout<<"X=";
	     cin>>x;
	     cout<<"Y=";
	     cin>>y;
	     p.max(x,y);
	       p.max();
}
