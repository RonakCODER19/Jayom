#include<iostream>
#include<fstream>
using namespace std;
main()
{
	     char ch;
	    ofstream a("input.txt");
	    cout<<"ENTER THE SINGLE CHARACTER=";
	    ch=getchar();
	    a<<ch;
	    a.close();
}
