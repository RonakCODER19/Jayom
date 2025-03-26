#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct link
{
	    struct link *pre;
	    int rno;
	    struct link *next;
};
typedef struct link node;
node *lp=NULL,*rp=NULL,*new1;
void create(node *);
void process(node *);
void display(node *);
void exit(int);
int count=0;
void main()
{
	     int n;
	     printf("\n1.CREATE\n2.DISPLAY\n3.EXIT => ");
	     printf("\n ENTER THE NUMBER ==> ");
	     scanf("%d",&n);
	     switch(n)
	     {
	     	case 1:
	     	  lp=(node *)malloc(sizeof(node));
			     create(lp);
		         main();
		         break;

		    case 2:
			     display(lp);
			     main();
			     break;

		    case 3:
			     exit(0);

	   }
}
void create(node *ptr)
{
	  
	   char ch;
	   int temp;
	   ptr->pre=NULL;
	   printf("ENTER YOUR NUMBER => ");
	   	   scanf("%d",&ptr->rno);
	   	    ptr->next=NULL;
	   do
	   {
	   	   printf(" DO YOU WANT TO CONTINUE(Y/N) => ");
	   	   fflush(stdin);
	   	   scanf("%c",&ch);
	   	   
	   	    if(ch=='y'||ch=='Y')
	   	   {
	            new1=(node *)malloc(sizeof(node));
	            new1->pre->next=NULL;
	            printf("ENTER YOUR CHOICE NUMBER => ");
	            scanf("%d",&new1->rno);
	            
		   }
		   
          if(lp->rno>new1->rno)
		   {
		   	  lp->pre=new1;
		   	  ptr=new1;
		   	  ptr->pre->next=NULL;
		   	  ptr->pre=new1;
		   	  
		   }
		   else
		   {
		   	   lp->next=new1;
		   	   ptr=new1;
		   	   ptr->pre->next=NULL;
		   	   ptr->next=new1;
		   	   
		   }
		   
		   count++;
	   }while(ch=='y'||ch=='Y');
	  
}
void display(node *ptr)
{
     
	  if(ptr==NULL)
      {
	  	  return;
	  }
	  else
	  {
	  	  display(ptr->pre);
	  	   printf("%d",ptr->rno);
	  	display(ptr->next);
	  }
}
	     	   	 
		 
