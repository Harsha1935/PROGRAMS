#include<stdio.h>
#include<stdlib.h>
struct DLL
{
  int data;
  struct DLL*left,*right;
};
typedef struct DLL node;
node*create(node*first)
{
   node*new,*prev;
   int x;
   printf("Enter data into DLL(enter -1 to stop):");
   scanf("%d",&x);
   while(x!=-1)
   {
        new=(node*)malloc(sizeof(node));
        new->data=x;
        new->left=new->right=NULL;
        if(first==NULL)
        {
                first=new;
                prev=new;
        }
        else
        {
          prev->right=new;
          new->left=prev;
          prev=new;
        }
   printf("Enter data into DLL (enter -1 to stop):");
   scanf("%d",&x);
   }
return first;
}       
void display(node*first)
{
  node*temp=first;
  if(first==NULL)
  {
        printf("No list to print");
  }
  else
  {
        while(temp!=NULL)
        {
          printf("<-|%d|->",temp->data);
          temp=temp->right;
        }
        printf("NULL");
  }
}
int count(node*first)
{
  int c=0;
  node*temp=first;
  while(temp!=NULL)
  {
    c++;
    temp=temp->right;
  }
return c;
}
void search(node*first,int x)
{
 node*temp=first;
 int flag=0;
 while(temp!=NULL)
 {
  if(temp->data==x)
  {
    flag=1;
    break;
  }
  else
  {
    temp=temp->right;
  }
 }
 if(flag==1)
 {
   printf("The element %d is found",x);
 }
 else
 {
   printf("The element %d is not found ",x);
 }
}
node*insert_at_begin(node*first,int x)
{
  node *new=(node*)malloc(sizeof(node));
  new->data=x;
  new->left=new->right=NULL;
  if(first==NULL)
  {
        first=new;
  }
  else
  {
        new->right=first;
        first->left=new;
        first=new;
  }
return first;
}
node*insert_at_end(node*first,int x)
{
  node*temp;
  node*new=(node*)malloc(sizeof (node));
  new->data=x;
  new->left=new->right=NULL;
  if(first==NULL)
  {
    first=new;
  }
  else
  {
     temp=first;
     while(temp->right!=NULL)
     {
        temp=temp->right;
     }
     temp->right=new;
     new->left=temp;
  }
return first;
}
node *insert_at_pos(node*first,int pos,int x)
{
  int i;
  int n;
  node*new,*temp;
  new=(node*)malloc (sizeof(node));
  new->data=x;
  new->left=new->right=NULL;
  n=count(first);
  if(pos>1 && pos<n)
  {
    temp=first;
    for(i=1;i<pos-1;i++)
    {
      temp=temp->right;
    }
    new->right=temp->right;
    temp->right=new;
    new->right->left=new;
  }
return first;
}
node *delete(node *first,int x)
{
    node *temp=first,*temp1;
    int flag=0;
    if (first==NULL)
    {
        printf("NO elements to delete\n");
    }
    else
    {
        if (first->data==x)
        {
            first=first->right;
            free(temp);
        }
        else
        {
            temp1=first->right;
            while(temp!=NULL)
            {
                if (temp->data==x)
                {
                    flag=1;
                    break;
                }
                else
                {
                    temp1=temp;
                    temp=temp->right;
                }
            }
            if(flag)
            {
                temp1->right=temp->right;
                free(temp);
            }
            else
            {
                printf("Element not found to delete\n");
            }
        }
    }
    return first;
}
void sort(node *first)
{
    int x;
    node *temp=first,*temp1;
    if(first==NULL)
    {
        printf("No elements to sort\n");
    }
    else
    {
        for(temp=first;temp->right!=NULL;temp=temp->right)
        {
            for(temp1=temp->right;temp1!=NULL;temp1=temp1->right)
            {
                if(temp->data>temp1->data)
                {
                    x=temp1->data;
                    temp1->data=temp->data;
                    temp->data=x;
                }
            }
        }
    }
}
node* reverse(node *first)
{
    node*present=first,*prev=NULL,*save;
    while(present!=NULL)
    {
        save=present->right;
        present->right=prev;
        prev=present;
        present=save;
    }
    return prev;
}
int main()
{
  int ch,x,pos,n;
  node*head=NULL;
  while(1)
  {
    printf("\n 1.create \n2.display \n3.count \n4.search\n 5.insert at beginning \n 6.insert at ending \n 7.insertat given position\n 8.delete\n9.sort\n10.reverse\n11.exit\n");
    printf("Enetr your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
       case 1:head=create(head);
              break;
       case 2:printf("\n The list of elments are");
              display(head);
              break;
       case 3:n=count(head);
              printf("The number of nodes in the list=%d",n);
              break;
        case 4:printf("\n Enter element to search:");
               scanf("%d",&x);
               search(head,x);
               break;
        case 5:printf("\n Enter element to insert :");
               scanf("%d",&x);
               head=insert_at_begin(head,x);
               break;
        case 6:printf("\n Enter elemnet to insert:");
               scanf("%d",&x);
               head=insert_at_end(head,x);
               break;
        case 7:printf("\n Enter element to insert:");
               scanf("%d",&x);
               printf("\n Enter postion to insert:");
               scanf("%d",&pos);
               head=insert_at_pos(head,pos,x);
               break;
        case 8:printf("\n Enter element to delete:");
               scanf("%d",&x);
               head=delete(head,x);
               break;
        case 9:sort(head);
               break;
        case 10:head=reverse(head);
                break;
        case 11:exit(1);
                break;
        default:printf("please chech your given choice");
    }
  }
}
