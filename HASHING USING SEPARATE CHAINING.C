#include<stdio.h>
#include<stdlib.h>
struct hashtable
{
    int data;
    struct hashtable*next;
};
typedef struct hashtable node;
void insert(node*t[10],int x);
void search(node*t[10],int x);
void delete(node*t[10],int x);
void display(node*t[10]);
int hash(int x);
void main()
{
    node*t[10];
    int i,ch,x;
    for(i=0;i<10;i++)
    {
        t[i]=(node*)malloc(sizeof(node*));
        t[i]->next=NULL;
    }
    while(1)
    {
        printf("\n1.insert \n2.search \n3.delete \n 4.display \n 5.exit");
        printf("\n Enter your choice ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the value to insert");
                   scanf("%d",&x);
                   insert(t,x);
                    break;
            case 2:printf("Enter the element to search:");
                   scanf("%d",&x);
                   search(t,x);
            case 3:printf("Enter the element to delete :");
                   scanf("%d",&x);
                   delete(t,x);
                   break;
            case 4:printf("\n Elements in hash table are:");
                   display(t);
                   break;
            case 5:exit(0);
                  break;
            default:printf("Entered wrong choice");
        }
    }
}
void insert(node*t[10],int x)
{
    int i=hash(x);
    node*p=(node*)malloc(sizeof(node*));
    p->data=x;
    p->next=NULL;
    if(t[i]->next==NULL)
    {
        t[i]->next=p;
    }
    else
    {
        p->next=t[i]->next;
        t[i]->next=p;
    }
}
int hash(int x)
{
    return x%10;
}
void search(node*t[10],int x)
{
    int i=hash(x);
    int flag=0;
    node*temp=t[i]->next;
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
    if(flag)
    {
        printf("Element %d is found",x);
    }
    else
    {
        printf("Element %d is not found ",x);
    }
}
void delete(node*t[10],int x)
{
    int i=hash(x);
    int flag=0;
    node*temp=t[i]->next;
    node*temp1=t[i];
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
    if(flag)
    {
        temp1->next=temp->next;
        free(temp);
    }
    else
    {
        printf("Element %d is not found",x);
    }
}
void display(node*t[10])
{
    node*temp;
    int i;
    for(i=0;i<10;i++)
    {
        temp=t[i]->next;
        printf("%d||->",i);
        while(temp!=NULL)
        {
            printf("|%d|->",temp->data);
            temp=temp->next;
        }
       printf("NULL\n"); 
    }
}
