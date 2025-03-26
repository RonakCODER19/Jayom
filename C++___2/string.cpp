#include<iostream>
#include<string.h>
using namespace std;
class data
{
	       public:
	       	char name[30];
	       	  void input(char name[])
	       	  {
	       	  	  
	       	  	  strcpy(this->name,name);
			  }
			  void output()
			  {
			  	    
			  	    cout<<"STRING REV="<<strrev(name);
			  	    
			  }
};
main()
{
	     data p;
	     char name[30];
	     cout<<"NAME=";
	     gets(name);
	     p.input(name);
	     p.output();
}
