#include<iostream>
#include<string.h>
using namespace std;

class data
{
    public:

    int count;
        void count(char name[])
        {
            int i=0;
            count=0;
            while(name[i])
            {
                if(name[i]>=97 && name[i]<=122 || name[i]>=65 && name[i]<=90)
                {
                    count++;
                } 
            i++;
            }
        
        }

        void count()
        {
            cout<<"in this string having "<<count<<" alphobat";
        }
};
main()
{
	     data p;
       char name[30];
        cout<<"Enter any name :";
        gets(name);
        
        p.s_count(name);
        p.s_count();
    
}
