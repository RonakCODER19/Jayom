#include<iostream>
#include<fstream>
using namespace std;
main()
{
	    int k[20],i,n;
	    ofstream a("num.txt");
	    cout<<"ENTER THE ONE NUMBER=";
	    cin>>n;
	     
	    for(i=0;i<n;i++)
	    {
	    	 cout<<"NUM=";
	    	 cin>>k[i];
	    	 a<<k[i]<<endl;
		}
	    a.close();
	   ifstream b("num.txt");
	   	ofstream E("EVEN.txt");
			
		ofstream O("ODD.txt");
		while(b>>n);
		{
			if(n % 2 == 0)
			{
				E<<n;
			}
			else
				O<<n;
		}
		O.close();
		E.close();
	 
	 
	   b.close();
}
