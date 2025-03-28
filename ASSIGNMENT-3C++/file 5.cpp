#include<iostream>
#include<fstream>
using namespace std;
main()
{
	     char ch,c;
	    ofstream a("sum2.txt");
	    cout<<"ENTER THE ONE LINE=";
	    ch=getchar();
	    while(ch!=EOF)
	    {
	        a<<ch;
	        ch=getchar();
	     }
	    a.close();
	    
	   ifstream b("sum2.txt");
	   ofstream d("OUTPUT.txt");
	  while(b.get(c))
	  {
	  	 d<<c;
	  }
	 
	   b.close();
	   d.close();
	   ifstream h("OUTPUT.txt");
	   
	   while(h.get(c))
	   {
	   	 cout<<c;
	   }
}
