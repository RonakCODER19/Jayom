#include<iostream>
#include<string.h>
using namespace std;
class data
{
	       public:
	       	char name1[30];
	       	  void input(char name[])
	       	  {
	       	  	  
	       	  	  strcpy(name1,name);
			  }
			  void input()
			  {
			  	    
			  	    cout<<"STRING LEN="<<strlen(name1);
			  	    
			  }
};
main()
{
	     data p;
	     char name[30];
	     cout<<"NAME=";
	     gets(name);
	     p.input(name);
	     p.input();
}
