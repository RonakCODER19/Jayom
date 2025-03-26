#include<iostream>
using namespace std;
class data
{
	    public:
	    	int sum,sub,mul,div;
	    	void add(int a,int b)
	    	{
	    		sum=a+b;
	    		cout<<"SUM="<<sum;
			}
			void add(int a,double b)
			{
				sub=a-b;
				cout<<endl<<"SUB="<<sub;
			}
			void add(double a,int b)
			{
				mul=a*b;
				cout<<endl<<"MUL="<<mul;
			}
			void add(double a,double b)
			{
				 div=a/b;
				 cout<<endl<<"DIV="<<div;
			}
};
main()
{
	   data p;
	   int a,b;
	   cout<<"A=";
	   cin>>a;
	   cout<<"B=";
	   cin>>b;
	   double k,s;
	   k=a;
	   s=b;
	   p.add(a,b);
	   p.add(a,s);
	   p.add(k,b);
	   p.add(k,s);
}
