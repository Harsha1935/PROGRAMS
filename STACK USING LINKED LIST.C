#include<stdio.h>
#include<stdlib.h>
struct stack 
{
    int data;
    struct stack*next;
};
typedef struct stack node;
node*top=NULL;
void push(int x)
{
    node*new;
    new=(node*)malloc(sizeof(node));
    new->data=x;
    new->next=NULL;
    if(top==NULL)
    {
        top=new;
        
    }
    else
    {
    new->next=top;
    top=new;
    }
}
int pop()
{
    int x;
    node*temp;
    if(top==NULL)
    {
        return -1;
    }
    else
    {
        x=top->data;
        temp=top;
        top=top->next;
        free(temp);
        return x;
    }
}
int peak()
{
    return top->data;
}
void display()
{
    node*temp;
    temp=top;
    while(temp!=NULL)
    {
        printf("|%d|->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
void main()
{
    int x,ch;
    while(1)
    {
        printf("\n 1.push \n 2.pop \n 3.peak \n 4.display\n 5.exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter element to insert:");
                   scanf("%d",&x);
                   push(x);
                   break;
            case 2:x=pop();
                   if(x==-1)
                   {
                       printf("stack underflow");
                   }
                   else
                   {
                       printf("Element deleted=%d",x);
                   }
                   break;
            case 3:x=peak();
                   printf("The element on top of stack=%d",x);
                   break;
            case 4:printf("\n The elements in stack are:");
                   display();
                   break;
            case 5:exit(0);
                   break;
            default:printf("Entered wrong choice");
        }
    }
}
