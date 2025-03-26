#include<stdio.h>
#include<conio.h>
void main()
{
	    FILE *fptr;
	    fptr=fopen("F:\\23-jayom-A\\DFS-2\\abc\\xyz\\filename.txt","w");
	    if(fptr==NULL)
	    {
	    	printf("FILE IS NOT CREATED");
		}
		else
		{
			 printf("FILE IS CREATED");
		}
	    getch();
}
