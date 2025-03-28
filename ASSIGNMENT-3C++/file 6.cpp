#include<iostream>
#include<fstream>
using namespace std;
main()
{
	     char ch,c;
	     int alph=0,word=0,num=0,sp=0;
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
	  
	  while(b.get(c))
	  {
	  	 if(c>=65 && c<=90 || c>=97 && c<=122)
                {
                    alph++;
                     word++;
                }
                else if(c>=48 && c<=57)
                {
                    num++;
                    word++;
                }
                else if(c==' ')
                {
                    sp++;
                }
	  }
	  cout<<"COUNT THE ALPHABET="<<alph<<endl;
	  cout<<"COUNT THE WORD="<<word<<endl;
	  cout<<"COUNT THE NUMBER="<<num<<endl;
	  cout<<"COUNT THE SPACE="<<sp;
	 
	   b.close();
	   
}
