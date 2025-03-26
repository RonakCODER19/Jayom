#include<iostream>
#include<string.h>
using namespace std;
class person
{
	        public:
	        int perno;
	        void input()
	        {
	        	 cout<<"ENTER THE TOTAL PERSON=";
	        	 cin>>perno;
			}
};
class teacher:public person
{
	     public:
	     	char name[30];
	     	void input1()
	     	{
	     		cout<<"ENTER THE TEACHER NAME=";
	     		fflush(stdin);
	     		gets(name);
			 }
			 void output()
			 {
			 	cout<<endl;
			 	cout<<endl;
			 	cout<<"TOTAL PERSON="<<perno<<endl;
			 	 cout<<"TEACHER NAME=";
			 	 puts(name);
			 	 cout<<endl;
			 }
	     	
};
class student:public person
{
	     public:
	     	char name1[30];
	     	int no;
	     	void input2()
	     	{
	     		cout<<"ENTER THE ROLL NUMBER=";
	     		cin>>no;
	     		cout<<"ENTER THE STUDENT NAME=";
	     		fflush(stdin);
	     		gets(name1);
			 }
};
class exam:public student
{
	      public:
	      	char name2[30];
	      	void input3()
	      	{
	      		 cout<<"ENTER THE EXAM NAME=";
	      		 	fflush(stdin);
	      		 gets(name2);
			  }
};
class talents:public exam
{
	           public:
	           	int k;
	           	void input4()
	           	{
	           		 cout<<"ENTER THE STUDENT RANK=";
	           		 cin>>k;
				   }
};
class award:public talents
{
	        public:
	        	char name3[30];
	        	void input5()
	        	{
	        		  cout<<"ENTER THE AWARDS NAME=";
	        		  	fflush(stdin);
	        		  gets(name3);
				}
				void output1()
				{
				     cout<<"ROLL NO="<<no<<endl;
				     cout<<"STUDENT NAME=";
				     puts(name1);
				     cout<<endl;
				     cout<<"EXAM NAME=";
				     puts(name2);
				     cout<<endl;
				     cout<<"STUDENT RANK NUMBER="<<k<<endl;
				     cout<<"STUDENT AWARDS NAME=";
				     puts(name3);
				     
				}
};
main()
{
	    teacher p;
	    p.input();
	    p.input1(); 
	    award q;
	    q.input2();
	    q.input3();
	    q.input4();
	    q.input5();
	    p.output();
	    q.output1();
}
