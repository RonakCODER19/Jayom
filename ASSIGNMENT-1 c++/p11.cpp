#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class student
{
	  public:
	  	int no;
	  	char name[30],name1[30];
	  	void input()
	  	{
	  		    cout<<" ENTER THE ROLL NUMBER => ";
	  		    cin>>no;
	  		    cout<<" ENTER THE STUDENT NAME => ";
	  		    fflush(stdin);
	  		    gets(name);
	  		    cout<<" ENTER THE COLLAGE NAME => ";
	  		    gets(name1);
		  }
	  	
};
class test:public student
{
	 public:
	 	int a[10],i;
	 	void input1()
	 	{
	 		  for(i=1;i<=6;i++)
	 		  {
	 		      cout<<"a["<<i<<"]=";
	 		      cin>>a[i];
			  }
		}
};
class result:public test
{
	public:
      int total;
	  float per;
	  result()
	  {
	  	  total=0;
	  	  per=0;
	  }
	  void input2()
	  {

	    	for(i=1;i<=6;i++)
	 		  {
	 		     total=total+a[i];
			  }
			  per=total/6;
	 }
	 void output()
	 {
	 	   cout<<" ROLL NUMBER ==> "<<no<<endl;
	 	   cout<<" STUDENT NAME ==> ";
	 	   puts(name);
	 	   cout<<endl;
	 	   cout<<" COLLAGE NAME ==> ";
	 	   puts(name1);
	 	   cout<<endl;
	 	   cout<<" MARKS  "<<endl;
	 	   for(i=1;i<=6;i++)
	 	   {
	 	   	   cout<<a[i]<<endl;
		   }
		   cout<<" TOTAL ==> "<<total<<endl;
		   cout<<" PERCENTAGE  ==> "<<per;
	 }
};
 main()
{
     result p;
	p.input();
	p.input1();
	p.input2();
	p.output();
}
