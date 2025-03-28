#include<iostream>
#include<fstream>
using namespace std;
main()
{
	     char ch,c;
	     int vowels=0,consonant=0;
	    ofstream a("sum5.txt");
	    cout<<"ENTER THE ONE LINE=";
	    ch=getchar();
	    while(ch!=EOF)
	    {
	        a<<ch;
	        ch=getchar();
	     }
	    a.close();
	    
	   ifstream b("sum5.txt");
	  
	  while(b.get(c))
	  {
	  	if(c=='a' || c=='A' || c=='e' || c=='E' || c== 'i' || c=='I' || c=='o'||c=='O' || c=='u'|| c=='U')
            {
                vowels++;
            }
            else
                consonant++;
   }
   cout<<"TOTAL VOWELS="<<vowels<<endl;
   cout<<"TOTAL CONSONANT="<<consonant;
   b.close();
}
