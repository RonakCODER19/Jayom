#include<iostream>
using namespace std;
class data
{
	  public:
	  	int k,v;
	  	void pos(int a)
	  	{
	  		  k=a;
	  		  if(a>0)
	  		  {
	  		  	  cout<<" ITS POSITIVE NUMBER :: ";
		      }
		}
		void pos()
		{
			   if(k<0)
			   {
			   	   cout<<" ITS NEGETIVE NUMBER  ";
			   }
		}
		void pos(double a)
		{
			   if(a==0)
			   {
			   	   cout<<" ITS NUMBER IS ZERO  ";
			   }
		}
};
main()
{
	   data p;
	   int n;
	   cout<<" ENTER THE NUMBER :-> ";
	   cin>>n;
	   double j;
	   j=n;
	   p.pos(n);
	   p.pos();
	   p.pos(j);
}
