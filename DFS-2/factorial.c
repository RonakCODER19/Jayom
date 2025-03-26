#include<stdio.h>
#include<conio.h>
int facto(int);
void main()
{
	          int n,f;
	          printf("\nENTER THE NUMBER=");
	          scanf("%d",&n);
	          f=facto(n);
	         printf("factorial=%d",f);
}
int facto(int n)
{
     if(n==0)
     {
     	return(1);
	 }
	 else
	 {
	 	return(n*facto(n-1));
	 }
}
