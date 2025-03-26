#include<stdio.h>
#include<conio.h>
void main()
{
	    FILE *fptr;
	    char a[20],str[20];
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
		printf("\nENTER THE STRING=");
		scanf("%s",&a);
		fprintf(fptr,"%s",a);
		fclose(fptr);
		fprintf(fptr,"%s",a);
		printf("%s",a);
	    getch();
}
