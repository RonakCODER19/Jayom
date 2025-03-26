#include<iostream>
using namespace std;
class data
{
	        public:
	        	int a,b,c;
	        	void mini(int a,int b,int c)
	        	{
	        		this->a=a;
	        		this->b=b;
	        		this->c=c;
				}
				void mini()
				{
					 if(a<b&&a<c)
					 {
					 	  cout<<"A IS MINIMUM="<<a;
					 }
					 else if(a>b&&b<c)
					 {
					 	cout<<"B IS MINIMUM="<<b;
					 }
					 else
					 {
					 	 cout<<"C IS MINIMUM="<<c;
					 }
				}
};
main()
{
	       data p;
	       int a,b,c;
	       cout<<"ENTER THE FIRST NUMBER=";
	       cin>>a;
	       cout<<"ENTER THE SECOND NUMBER=";
	       cin>>b;
	       cout<<"ENTER THE THIRD NUMBER=";
	       cin>>c;
	       p.mini(a,b,c);
	       p.mini();
}
