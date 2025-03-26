#include<iostream>
#include<fstream>
using namespace std;
main()
{
	     char ch;
	    ofstream a("sum.txt");
	    cout<<"ENTER THE SINGLE CHARACTER=";
	    ch=getchar();
	    while(ch!=EOF)
	    {
	        a<<ch;
	        ch=getchar();
	     }
	    a.close();
	    
	   ifstream b("sum.txt");
	  while(b.get(ch))
	   cout<<ch;
	   b.close();
}
