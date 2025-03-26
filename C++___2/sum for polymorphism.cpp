#include<iostream>
using namespace std;
class data
{
	     public:
	     	int a,b,add;
	     	void input()
	     	{
	     		cout<<"A=";
	     		cin>>a;
	     		cout<<"B=";
	     		cin>>b;
	        }
	        void sum()
	        {
	        	add=a+b;
	        	cout<<"SUM="<<add;
			}
			void sum(int h,int k)
			{
				 add=h+k;
				 cout<<"SUM="<<add;
			}
};
main()
{
	     data p;
	     p.input();
	     p.sum();
	     int a,b;
	     cout<<endl;
	     cout<<"A=";
	     cin>>a;
	     cout<<"B=";
	     cin>>b;
	     p.sum(a,b);
}
