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
node *lp=NULL,*rp=NULL,*new1=NULL;
void create(node *);
void insert(node *);
void display(node *);
void exit(int);
int data;
void main()
{
	       int n;
	       printf("\n1.CREATE\n2.INSERT\n3.DISPLAY\n4.EXIT\nENTER THE CHOICE=");
	       scanf("%d",&n);
	       switch(n)
	       {
	       	      case 1:
	       	      lp=(node *)malloc(sizeof(node));
	       	      create(lp);
	       	      main();
	       	      break;
	       	      
	       	      case 2:
	       	       insert(lp);
	       	       main();
	       	       break;
	       	       
	       	       case 3:
	       	       	display(lp);
	       	       	main();
	       	       	break;
	       	       	
	       	       	case 4:
	       	       		exit(0);
		   }
}
void create(node *ptr)
{
	   char ch;
	    ptr->pre=NULL;
	    printf("ENTER THE NUMBER=");
	    scanf("%d",&ptr->rno);
	    ptr->next=NULL;
	    data=ptr->rno;
	    do
	    {
		
	        printf("do you want to continue=");
	        fflush(stdin);
	        scanf("%c",&ch);
	        if(ch=='y')
	       {
		
             new1=(node *)malloc(sizeof(node));
             new1->pre=NULL;
            printf("ENTER THE NEW NUMBER=");
              scanf("%d",&new1->rno);
           }
            if(data<new1->rno)
		  {
		     	  lp->pre=new1;
			    new1->pre=NULL;
		    	 new1->next=lp;
		    	 ptr=new1;
		  }
		   else
	    	{
			   lp->next=new1;
			   new1->pre=lp;
			   new1->next=NULL;
			   ptr=new1;
		  }
	 }while(ch=='y');
	 

}
void display(node *ptr)
{
	   if(ptr!=NULL)
	   {
	      display(ptr->pre);
	      printf(" %d",ptr->rno);
	     display(ptr->next);
	   }
}


