#include<stdio.h>
#include<conio.h>
void main()
{
	    FILE *fptr,*ptr1;
	    int rno;
	    char a[20],str[20],b[20],ch,c;
	    printf("ENTER THE FILE NAME=");
	    scanf("%s",&str);
	    fptr=fopen(str,"w");
	    if(fptr==NULL)
	    {
	    	printf("FILE IS NOT CREATED");
		}
		else
		{
			 printf("FILE IS CREATED");
		}
	  do{
	        
			
		      printf("\nENTER THE ROLL NO=");
		      scanf("%d",&rno);
	    	  printf("\nENTER THE NAME=");
		      scanf("%s",&a);
		      printf("\nENTER THE ADDRESS=");
	  	      scanf("%s",&b);
	          fprintf(fptr,"\nROLLNO=%d",rno);
	          fprintf(fptr,"\nSTUDENT NAME=%s",a);
	          fprintf(fptr,"\nADDRESS=%s",b);
		   
		    
		    printf("\ndo you want to continue=");
		    fflush(stdin);
		    scanf("%c",&ch);
	    }while(ch=='y');
	       fclose(fptr);
	       
	     ptr1=fopen(str,"r");
	    while(!feof(ptr1))
	    {
	       c=fgetc(ptr1);
	       printf("%c",c);
	    }
		 
	   
	   fclose(fptr);
	
	    getch();
}

