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
node *lp=NULL,*rp=NULL;
void create(node *);
void display(node *);
void exit(int);
int count=0;
void main()
{
	        int n;
	        printf("\n1.CREATE\n2.DISPLAY\n3.EXIT\nENTER YOUR CHOICE=");
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
	    ptr->pre=NULL;
	    do
	    {
	    	  printf("ENTER YOUR NODE=");
	    	  scanf("%d",&ptr->rno);
	    	  printf("%d-%d-%d",ptr->pre,ptr->rno,ptr->next);
	    	  ptr->next=NULL;
	    	  printf("\nDO YOU WANT TO CONTINUE(Y/N)=");
	    	  fflush(stdin);
	    	  scanf("%c",&ch);
	    	  if(ch=='y'||ch=='Y')
	    	  {
	    	  	    ptr->next=(node *)malloc(sizeof(node));
	    	  	    ptr->next->pre=ptr;
	    	  	    ptr=ptr->next;
	    	  	    
			  }
			  count++;
		}while(ch=='y'||ch=='Y');
		
		rp=ptr;
		
}
void display(node *ptr)
{
	
   //  ptr=rp;
	          while(ptr!=NULL)
	          {
	          	   printf(" %d",ptr->rno);
	          	   ptr=ptr->next;
			  }
			  printf("\ncount node=%d",count);
}

