#include<iostream>
#include<string.h>
using namespace std;
class data
{
	public:
		char name[30];
		int l,u,n,i;
		data()
		{
			u=0;
			l=0;
			n=0;
		}
		void input(char name[30])
		{
			strcpy(this->name,name);
		}
		void input()
		{
			for(i=0;i<name[i]!=NULL;i++)
			{
			
			 if(name[i]>=65&&name[i]<=90)
			 {
			 	 u++;
			 }
			 else if(name[i]>=97&&name[i]<=122)
			 {
			 	  l++;
			 }
			 else if(name[i]>=49&&name[i]<=57)
			 {
			 	  n++;
			 }
		  }
			 cout<<"UPPER CHARACTER="<<u<<endl;
			 cout<<"LOWER CHARACTER="<<l<<endl;
			 cout<<"NUMBER="<<n;
		}
};
main()
{
	      data p;
	      char name[30];
	      cout<<"ENTER THE STRING=";
	      gets(name);
	      p.input(name);
	      p.input();
	      
}
