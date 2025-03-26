#include<iostream>
#include<string.h>
using namespace std;
class data
{
	          public:
	          	char name[30],name1[30];
	          	void input(char name[30],char name1[30])
	          	{
	          		  strcpy(this->name,name);
	          		  strcpy(this->name1,name1);
				  }
				  void output()
				  {
				  	     if(strcmp(name,name1))
				  	     {
				  	     	cout<<"STRING ARE SAME";
						   }
						   else
						   {
						   	cout<<"STRING NOT SAME";
						   }
				  }
};
main()
{
	   data p;
	   char name[30],name1[30];
	   cout<<"ENTER THE FIRST STRING=";
	   gets(name);
	   cout<<"ENTER THE SECOND STRING=";
	   fflush(stdin);
	   gets(name1);
	   p.input(name,name1);
	   p.output();
	   
}
