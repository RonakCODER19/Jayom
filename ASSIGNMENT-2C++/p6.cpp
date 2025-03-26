#include<iostream>
#include<string.h>
using namespace std;
class data
{
	       public:
	       	int i,l;
	       
	       	char name1[30],k[30];
	       	  void input(char name[])
	       	  {
	       	  	  
	       	  	  strcpy(name1,name);
			  }
			  void output()
			  {
			  	    l=0;
			  	    for(i=0;i<name1[i]!='\0';i++)
			  	    {
			  	    	 l++;
				    }
					  cout<<"LENGTH="<<l<<endl;
					  cout<<"STR REV=";
			  	    for(i=l;i>=0;i--)
			  	    {
			  	          l--;
			  	          cout<<name1[i];
			  	      
					  }
					     
					  
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
