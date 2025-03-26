#include<iostream>
#include<fstream>
using namespace std;
main()
{
	        char ch;
	       ofstream a("ch.txt");
	       cout<<"ENTER ONE CHARCHTER=";
	       ch=getchar();
	       a.put(ch);
	       a.close();
	        
	      ifstream b("ch.txt");
	      b.get(ch);
	      cout<<ch;
	      b.close();
}
