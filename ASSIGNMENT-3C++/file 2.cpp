#include<iostream>
#include<fstream>
using namespace std;
main()
{
	     char ch,c;
	    ofstream a("sum.txt");
	    cout<<"ENTER THE ONE LINE=";
	    ch=getchar();
	    while(ch!=EOF)
	    {
	        a<<ch;
	        ch=getchar();
	     }
	    a.close();
	    
	   ifstream b("sum.txt");
	  while(b.get(c))
	  {
	  	 if(c>=97&&c<=122)
	  	 {
	  	 	c=c-32;
		  }
		    cout<<c;
	  }
	 
	   b.close();
}
