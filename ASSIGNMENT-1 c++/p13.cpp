#include<iostream>
#include<string.h>
using namespace std;
class Media
{
	    public:
	    	char title[30];
	    	int price;
	    	
	  Media()
	    {
	    	 cout<<"ENTER THE TITLE =";
	    	 fflush(stdin);
	    	 gets(title);
	    	 cout<<"ENTER THE PRICE=";
	    	 cin>>price;
	    	 break;
		}
		~Media()
		{
			system("cls");
		}		
};
class flopy:public Media
{
	    public:
	    	int qty,amt;
	    	char f_type[30];
	    	void input()
	    	{
	    		cout<<"ENTER THE FLOPY DISK TYPE=";
	    		fflush(stdin);
	    		gets(f_type);
	    		cout<<"ENTER THE QUNTITIES OF FLOPY DISK=";
	    		cin>>qty;
	    		amt=qty*price;
	    		
			}
			void output()
			{
				  cout<<endl;
				  cout<<endl;
				 cout<<"FLOPY DISK TYPE=";
				 puts(f_type);
				 cout<<endl;
				 cout<<"QUNTITIES OF FLOPY DISK="<<qty<<endl;
				 cout<<"PRICE OF FLOPY DISK="<<amt;
			}
};
class CD:public Media
{
	      public:
	      int qty1,amt1;
	    	char cd_type[30];
	    	void input1()
	    	{
	    		cout<<"ENTER THE COMPECT DISK TYPE=";
	    		fflush(stdin);
	    		gets(cd_type);
	    		cout<<"ENTER THE QUNTITIES OF COMPECT DISK=";
	    		cin>>qty1;
	    		amt1=qty1*price;
	    		
			}
		 void output1()
			{
				  cout<<endl;
				  cout<<endl;
				 cout<<"COMPECT DISK TYPE=";
				 puts(cd_type);
				 cout<<endl;
				 cout<<"QUNTITIES OF COMPECT DISK="<<qty1<<endl;
				 cout<<"PRICE OF COMPECT DISK="<<amt1;
			}	
};
main()
{
	    flopy p;
	    CD q;
	    p.input();
	    p.output();
	    cout<<endl;
	    cout<<endl;
	    q.input1();
	    q.output1();
}
