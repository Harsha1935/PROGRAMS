#include<stdio.h>
#include<stdlib.h>
struct circularlist
{
        int data;
        struct circularlist*next;
};
typedef struct circularlist node;
node* create(node *first)
{
        node*new,*prev;
        int x;
        printf("\n Enter the data value(enter -1 to stop):");
        scanf("%d",&x);
        while(x!=-1)
        {
                new=(node*)malloc(sizeof(node));
                new->data=x;
                new->next=NULL;
                if(first==NULL)
                {
                  first=new;
                  prev=new;
                }
                else
                {
                        prev->next=new;
                        prev=new;
                }
                printf("\n Enter the data value(enter -1 to stop):");
                scanf("%d",&x);
        }
        prev->next=first;
        return first;
}
void display(node *first)
{
        node *temp=first;
        if(first==NULL)
        {
                printf("No elements in list");
        }
        else
        {
                temp=first;
                do
                {
                        printf("|%d|->",temp->data);
                        temp=temp->next;
                }while(temp!=first);
          printf("|%d|",temp->data);
        }
}
int count(node*first)
{
        int c=0;
        node*temp=first;
        if(first==NULL)
        {
                return c;
        }
        else
        {
          do
          {
            c++;
            temp=temp->next;
          }while(temp!=first);
          return c;
        }
}
void search(node*first,int x)
{
    int flag=0;
    node*temp;
    if(first==NULL)
    {
        printf("No list to search");
    }
    else
    {
        temp=first;
        do
        {
            if(temp->data==x)
            {
                flag=1;
                break;
            }
            else
            {
                temp=temp->next;
                        }
                }while(temp!=first);
                if(flag==1)
                {
                        printf("Element %d is found",x);
                }
                else
                {
                        printf("Element %d is not found",x);
                }
        }
}
node*insert_at_begin(node*first,int x)
{
    node*new,*temp;
    new=(node*)malloc(sizeof(node));
    new->data=x;
    if(first==NULL)
    {
        first=new;
        new->next=first;
    }
    else
    {
        temp=first;
        do
        {
            temp=temp->next;
        }while(temp->next!=first);
        new->next=first;
        temp->next=new;
        first=new;
    }
    return first;
}
node*insert_at_end(node*first,int x)
{
    node*new,*temp;
    new=(node*)malloc(sizeof(node));
    new->data=x;
    new->next=NULL;
    if(first==NULL)
    {
        first=new;
        new->next=first;
    }
    else
    {
        temp=first;
        do
        {
            temp=temp->next;
        }while(temp->next!=first);
        new->next=first;
        temp->next=new;
    }
    return first;
}
node*insert_at_pos(node *first,int pos,int x)
{
    node*temp=first,*new;
    int n=count(first);
    int i;
    if(pos>1 && pos<n)
    {
        new=(node*)malloc(sizeof(node));
        new->data=x;
        new->next=NULL;
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        new->next=temp->next;
        temp->next=new;
    }
    return first;
}
node*delete(node *first,int x)
{
    node *temp1,*temp;
    int flag=0;
    if(first==NULL)
    {
        printf("\n No elements in list to delete");
    }
    else if(first->data==x)
    {
        temp1=first;
        temp=first;
        while(temp->next!=first)
        {
            temp=temp->next;
        }
        first=first->next;
        temp->next=first;
        free(temp);
    }
    else
    {
        temp1=first;
        temp=first->next;
        while(temp!=first)
        {
            if(temp->data==x)
            {
                flag=1;
                break;
            }
            else
            {
              temp1=temp->next;
            }
        }
        if(flag==1)
        {
            temp1->next=temp->next;
            free(temp);
        }
        else
        {
          printf("%d element is not found",x);
        }
        return first;
    }
}

void sort(node *first)
{
  node *temp1,*temp2;
  int x;
  for(temp1=first;temp1->next!=first;temp1=temp1->next)
  {
    for(temp2=temp1->next;temp2!=first;temp2=temp2->next)
    {
        if(temp1->data > temp2->data)
        {
        x=temp1->data;
        temp1->data=temp2->data;
        temp2->data=x;
        }
    }
  }
}
node*reverse(node *first)
{
    node*present=first,*prev=NULL,*save;
    while(present!=NULL)
    {
        save=present->next;
        present->next=prev;
        prev=present;
        present=save;
    }
    return prev;
}
int main()
{
  int ch,x,pos,n;
  node *head=NULL;
  while(1)
  {
   printf("\n 1.create \n2.display \n3.count \n4.search\n 5.insert at beginning \n 6.insertion at ending\n 7.insertion at given position\n 8.delete\n9.sort\n10.reverse\n11.exit\n");
   printf("\n Enter your choice:");
   scanf("%d",&ch);
   switch(ch)
   {
     case 1:head=create(head);
            break;
     case 2:printf("\n The list of elements are");
            display(head);
            break;
     case 3:n=count(head);
            printf("The number of nodes in the list=%d",n);
            break;
     case 4:printf("\n Enter  element to search:");
            scanf("%d",&x);
            search(head,x);
            break;
     case 5:printf("\n Enter  element to insert:");
            scanf("%d",&x);
            head=insert_at_begin(head,x);
            break;
     case 6:printf("\n Enter  element to insert:");
            scanf("%d",&x);
            head=insert_at_end(head,x);
            break;
     case 7:printf("\n Enter  element to insert:");
            scanf("%d",&x);
            printf("\n Enter position to insert:");
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
   default:printf("Please check your given choice");
   }
  }
}
