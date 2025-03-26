#include<iostream>
using namespace std;
class data
{
	     public:
	     	int a,b;
	     	void input()
	     	{
	     		cout<<"A=";
	     		cin>>a;
	     		cout<<"B=";
	     		cin>>b;
			 }
			 void max()
			 {
			 	if(a>b)
			 	{
			 		cout<<"A is maximum="<<a;
			 		
				 }
				 else
				 {
				 	cout<<"B is maximum="<<b;
				 }
			 }
			 void max(int h,int i)
			 {
			 	if(h<i)
			 	{
			 		cout<<"H is minimum="<<h;
				 }
				 else
				 {
				 	cout<<"I is minimum="<<i;
				 }
			 }
};
main()
{
	     data p;
	     p.input();
	     p.max();
	     int j,k;
	     cout<<endl;
	     cout<<"J=";
	     cin>>j;
	     cout<<"K=";
	     cin>>k;
	     p.max(j,k);
}
