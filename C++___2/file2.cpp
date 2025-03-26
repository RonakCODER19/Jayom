#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	     ofstream myfile("sum.txt");
	     myfile<<"HELLO HOW ARE YOU?";
	     myfile.close();
	     string str;
	     
	     ifstream  abc("sum.txt");
	     getline(abc,str);
	     cout<<str;
	     abc.close();
}
