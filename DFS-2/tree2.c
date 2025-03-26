#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct tree
{
	   int info;
	   struct tree *left;
	   struct tree *right;
};
typedef struct tree node;
node *insert(node *,int);
void inorder(node *);
void postorder(node *);
void preorder(node *);
node *delet(node *,int);
node *search(node *,int);
node *update(node *,int,int);
void exit(int);
void main()
{
	     node *root;
	     int n,data,n1,no,oldno,newno;
	     root=NULL;
	     do
	     {
	     	do
	     	{
	     		printf("\n");
	     		printf("\n1.CREATE BINARY TREE");
	     		printf("\n2.INORDER DISPLAY");
	     		printf("\n3.POSTORDER DISPLAY");
	     		printf("\n4.PREORDER DISPLAY");
	     		printf("\n5.DELETE THE TREE");
	     		printf("\n6.SEARCH OF THE TREE");
	     		printf("\n7.UPDATE THE NUMBER");
	     		printf("\n8.EXIT");
	     		printf("\nENTER THE CHOICE=");
	     		scanf("%d",&n);
	     		if(n<1||n>8)
	     		printf("\ninvalid choice");
	     		
			 }while(n<1||n>8);
			 switch(n)
			 {
			 	  case 1:
			 	  	printf("ENTER THE NODE VALUE=");
			 	  	scanf("%d",&data);
			 	  	root=insert(root,data);
			 	  	break;
			 	  	
			 	  	 case 2:
			 	     printf("\nINOREDRE VALUE=");
			 	  	 inorder(root);
					 break;
					   
					 case 3:
					 printf("\nPOSTOREDRE VALUE=");
					 postorder(root);
					 break;
					  
					 case 4:
					 printf("\nPREOREDRE VALUE=");
					 preorder(root);
					 break;
					 case 5:
					 printf("\nDELET THE ANY VALUE=");
					 scanf("%d",&n1);
					 root=delet(root,n1);
					 break;
					 
					 case 6:
					 printf("SEARCH ANY NUMBER=");
	                 scanf("%d",&no);
					node *k=search(root,no);
					if(k!=NULL)
					{
						printf("\nSEARCH IS FOUND=%d",no);
					}
					else
					{
						 printf("\nSEARCH IS NOT FOUND=%d",no);
					}
					 break;
					 case 7:
					 printf("ENTER OLD NUMBER=");
					 scanf("%d",&oldno);
					 printf("ENTER NEW NUMBER=");
					 scanf("%d",&newno);
					 root=update(root,oldno,newno);
					 break;	
					 case 8:
					 exit(0);
					 break;	
			 }
		 }while(n!=8);
		 
}
node *insert(node *root,int data)
{
	   if(!root)
	   {
	   	   root=(node *)malloc(sizeof(node));
	   	   root->info=data;
	   	   root->left=NULL;
	   	   root->right=NULL;
	   	   return(root);
	   }
	   if(root->info>data)
	   {
	   	root->left=insert(root->left,data);
	   }
	   else
	   {
	   	root->right=insert(root->right,data);
	   }
	   return(root);
}
void inorder(node *root)
{
	if(root!=NULL)
	{
		 inorder(root->left);
		 printf(" %d",root->info);
		 inorder(root->right);
	}
	return;
}
void postorder(node *root)
{   
    if(root!=NULL)
	{
		 postorder(root->left);
		 postorder(root->right);
		 printf(" %d",root->info);
	}
	return;
}
void preorder(node *root)
{
	
		if(root!=NULL)
	{
		 printf(" %d",root->info);
		 postorder(root->left);
		 postorder(root->right);	
	}
	return;
}
node *delet(node *ptr,int v)
{
	  node *p1,*p2;
	  if(!ptr)
	  {
	  	   printf("\nNODE IS NOT FOUND");
	  	   return(ptr);
	  }
	  else if(ptr->info<v)
	  {
	  	 ptr->right=delet(ptr->right,v);
	  	 return(ptr);
	  }
	  else if(ptr->info>v)
	  {
	  	ptr->left=delet(ptr->left,v);
	  	return(ptr);
	  }
	  else 
	  {
	  	    if(ptr->info==v)
	  	    {
	  	    	 if(ptr->left==ptr->right)
	  	    	 {
	  	    	 	  free(ptr);
	  	    	 	  return(NULL);
				 }
				 else if(ptr->left==NULL)
				 {
				 	p1=ptr->right;
				 	free(ptr);
				 	return(p1);
				 }
				 else if(ptr->right==NULL)
				 {
				 	p1=ptr->left;
				 	free(ptr);
				 	return(p1);
				 }  
				 else
				 {
				 	 p1=ptr->right;
				 	 p2=ptr->left;
				 	 if(p1->left!=NULL)
				 	 {
				 	 	p1=p1->left;
				 	 	p1->left=p2;
				 	 	free(ptr);
				 	 	return(p2);
					  }
				 }
			  }
	  }
	  
}
node *search(node *ptr,int no)
{
	    if(ptr==NULL||ptr->info==no)
	    {
	    	return ptr;
		}
		node *temp=search(ptr->left,no);
		if(temp!=NULL)
		{
			return temp;
		}
		return search(ptr->right,no);
	   
}
node *update(node *ptr,int oldno,int newno)
{
	     if(ptr==NULL)
	     {
	     	return NULL;
		 }
		 if(ptr->info==oldno)
		 {
		 	if(ptr->info>newno)
		 	{
		 	   ptr->left=insert(ptr->left,newno);
		 	    
		    }
		    else
		    {
		    	ptr->right=insert(ptr->right,newno);
			}
		 }
	
		ptr->left=update(ptr->left,oldno,newno);
		ptr->right=update(ptr->right,oldno,newno);
		 
		 return ptr;
}
