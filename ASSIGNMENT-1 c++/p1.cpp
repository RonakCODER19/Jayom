#include<iostream>
#include<conio.h>
using namespace std;
class data
{
	     public:
	    data()
	    {
	    	cout<<"joshi";
		}
};
class info:public data
{
	   public:
	   	info()
	   	{
	   		cout<<" jayom";
		   }
};
main()
{
	    info p;
}
