#include<stdio.h>
#include<conio.h>
void main()
{
	    FILE *fptr;
	    int rno;
	    char a[20],str[20],b[20];
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
		printf("\nENTER THE ROLL NO=");
		scanf("%d",&rno);
		printf("\nENTER THE NAME=");
		scanf("%s",&a);
		printf("\nENTER THE ADDRESS=");
		scanf("%s",&b);
	    fprintf(fptr,"ROLLNO=%d",rno);
	    fprintf(fptr,"\nSTUDENT NAME=%s",a);
	    fprintf(fptr,"\nADDRESS=%s",b);
		fclose(fptr);
		fprintf(fptr,"ROLLNO=%d",rno);
	    fprintf(fptr,"\nSTUDENT NAME=%s",a);
	    fprintf(fptr,"\nADDRESS=%s",b);
	    printf("\n");
		printf("ROLL NO=%d",rno);
		printf("\nSTUDENT NAME=%s",a);
		printf("\nADDRESS=%s",b);
		
	    getch();
}

