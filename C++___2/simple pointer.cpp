#include<iostream>
using namespace std;
class data
{
	      public:
	      	int a,b;
	      	void input(int a,int b)
	      	{
	      		this->a=a+b;
	      		this->b=a-b;
			}
			void output()
			{
				   cout<<"SUM="<<this->a<<endl;
				   cout<<"SUB="<<b;
			}
};
main()
{
	     data p;
	     p.input(10,5);
	     p.output();
}
