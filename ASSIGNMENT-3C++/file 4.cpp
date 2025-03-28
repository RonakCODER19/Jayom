#include<iostream>
#include<fstream>
using namespace std;
main()
{
	     char ch,c;
	    ofstream a("sum1.txt");
	    cout<<"ENTER THE ONE LINE=";
	    ch=getchar();
	    while(ch!=EOF)
	    {
	        a<<ch;
	        ch=getchar();
	     }
	    a.close();
	    
	   ifstream b("sum1.txt");
	  while(b.get(c))
	  {
	  	 if(c>=65&&c<=90)
	  	 {
	  	 	c=c+32;
		  }
		    cout<<c;
	  }
	 
	   b.close();
}
