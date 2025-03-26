#include<stdio.h>
#include<conio.h>
void main()
{
	    FILE *fptr;
	    char a[20];
	    fptr=fopen("F:\\23-jayom-A\\DFS-2\\abc\\xyz\\filename.txt","w");
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
	    getch();
}
