#include<stdio.h>
#include<stdlib.h>
struct slist
{
    int data;
    struct slist*next;
};
typedef struct slist node;
node* create(node *first)
{
    node *new,*prev;
    int x;
    printf("Enter the data value(enter -1 to stop):\n");
    scanf("%d",&x);
    while(x!=-1)
    {
        new=(node *)malloc(sizeof(node));
        new->data=x;
        new->next=NULL;
        if(first==NULL)
        {
            first=new;
            prev=new;
        }
        else{
            prev->next=new;
            prev=new;
        }
        printf("enter data (enter -1 to stop):\t");
        scanf("%d",&x);
    }
    return first;
}
void display(node *first)
{
    node *temp=first;
    if(first==NULL)
    {
        printf("No list to print");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("|%d|->",temp->data);
            temp=temp->next;
        }
        printf("NULL");
    }
}
int count(node *first)
{
    int c=0;
    node *temp=first;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    return c;
}
void search(node *first,int x)
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
        temp=temp->next;
        }
    }
    if (flag==1)
    {
        printf("The  element %d is  found",x);
    }
    else
    {
        printf("The element %d is not found",x);
    }
}
node * insert_at_begin(node* first,int x)
{
    node* new=(node *)malloc(sizeof(node));
    new->data=x;
    new->next=NULL;
    if(first==NULL)
    {
        first=new;
    }
    else
    {
        new->next=first;
        first=new;
    }
    return first;
}
node *insert_at_end(node* first,int x)
{
    node*temp=first;
    node *new=(node *)malloc(sizeof(node));
    new->data=x;
    if(first==NULL)
    {
        first=new;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new;
    }
    return first;
}
node * insert_at_pos(node* first,int pos,int x)
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
node *delete(node *first,int x)
{
    node *temp,*temp1;
    int flag=0;
    temp=first;
    if(first->data==x)
    {
        first=first->next;
        free(temp);
    }
    else
    {
        temp1=first;
        temp=temp->next;
        while(temp!=NULL)
        {
            if(temp->data==x)
            {
                flag=1;
                break;
            }
            else
            {
                temp1=temp;
                temp=temp->next;
            }
        }
        if(flag==1)
        {
            temp1->next=temp->next;
            free(temp);
        }
        else
        {
            printf("Element %d is not found",x);
        }
    }
    return first;
}
void sort(node *first)
{
    node *temp1,*temp2;
    int x;
    for(temp1=first;temp1->next!=NULL;temp1=temp1->next)
    {
        for(temp2=temp1->next;temp2!=NULL;temp2=temp2->next)
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
node *reverse(node*first)
{
    node *present=first,*prev=NULL,*save;
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
            case 1: head=create(head);
                    break;
            case 2:printf("\n The list of elements are:");
                    display(head);
                    break;
            case 3: n=count(head);
                    printf("No.of nodes in the singly linked list=%d",n);
                    break;
            case 4: printf("\nEnter element to search:");
                    scanf("%d",&x);
                    search(head,x);
                    break;
            case 5: printf("\n Enter element to insert_at_begin:");
                    scanf("%d",&x);
                    head=insert_at_begin(head,x);
                    break;
            case 6: printf("\n Enter element to insert_at_end:");
                    scanf("%d",&x);
                    head=insert_at_end(head,x);
                    break;
            case 7: printf("\n Enter element to insert:");
                    scanf("%d",&x);
                    printf("\n Enter the position to insert:");
                    scanf("%d",&pos);
                    head=insert_at_pos(head,pos,x);
                    break;
            case 8: printf("Enter  element to delete:\n");
                    scanf("%d",&x);
                    head=delete(head,x);
                    break;
            case 9: sort(head);
                    break;
            case 10:head=reverse(head);
                    break;
            case 11:exit(1);
                    break;
            default:printf("please check your given choice");
                    break;
        }
    }
}
