#include<iostream>
#include<fstream>
using namespace std;
main()
{
	    char ch;
	   ofstream a("file.txt ");
	   cout<<"ENTER THE CHARCTER=";
	   ch=getchar();
	   a.put(ch);
	   a.close();
	   
	   ifstream b("file.txt");
	   b.get(ch);
	   cout<<ch;
	   b.close();
}
