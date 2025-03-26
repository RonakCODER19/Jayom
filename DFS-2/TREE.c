#include<stdio.h>
#include<malloc.h>
struct tree
{
	int r;
	struct tree *left;
	struct tree *right;
};
typedef struct tree node;
node* create(int data)
{
	node* n1=(node *)malloc(sizeof(node));
	n1->r=data;
	n1->left=NULL;
	n1->right=NULL;
	return n1;
}
node* insert(node* root,int data)
{
   if(root==NULL)
   {
   	root=create(data);
   }	
   else if(data<root->r)
   {
   	root->left=insert(root->left,data);
   }
   else
   {
   	root->right=insert(root->right,data);
   }
   return root;
}
void inorder(node* root)
{
	if(root==NULL)
	{
		printf("MT...");
	}
	else
	{
    if(root==NULL)
	return;
    inorder(root->left);
	printf("%d ",root->r);
    inorder(root->right);
    }
}
void preorder(node* root)
{
	if(root==NULL)
	{
		printf("MT..");
	}
	else
	{
    if(root==NULL)
	return;
    printf("%d ",root->r);
    preorder(root->left);
    preorder(root->right);
    }
}
void postorder(node* root)
{
	if(root==NULL)
	{
		printf("MT..");
	}
	else
	{
    if(root==NULL)
	return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->r);
    }
}
node* serach(node* root,int s)
{
	if(root==NULL && root->r==s)
	{
		return root;
	}
	if(s<root->r)
	  return serach(root->left,s);
	else
	  return serach(root->right,s);
}
int main()
{
	node* root=NULL;
	int n,i,data,j,s;
	printf("enter number of node = ");
	scanf("%d",&j);
	h:
	printf("1.create\n2.print in inorder\n3.print in preorder\n4.print in postorder\n5.Exit\n6.search number\nenter number of node = ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			for(i=1;i<=j;i++)
			{
	            printf("value %d = ",i);
	            scanf("%d",&data);
	            root=insert(root,data);
	         }  
	            goto h;
	    case 2:
	            printf("node in inorder...\n");
                inorder(root);
                printf("\n");
                goto h;
        case 3:
	            printf("node in preorder...\n");
	            preorder(root);
	            printf("\n");
	            goto h;
	    case 4:
	            printf("node in postorder...\n");
  	            postorder(root);
  	            printf("\n");
  	            goto h;
  	    case 6:
  	    	    printf("enter search number :- ");
	            scanf("%d",&s);
  	    	    serach(root,s);
  	    	    if(root->r==s)
  	    	    printf("%d is in list..\n");
  	    	    else
  	    	    printf("%d is not in list..\n");
  	         	printf("\n");
  	    	    goto h; 
  	    case 5:
  	    	    printf("\nExit..");
  	         	goto y;
    }
        y:
	return 0;
}
