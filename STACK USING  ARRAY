#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int a[MAX],top=-1;
void push(int x)
{
    if(top==MAX-1)
    {
        printf("stack overflow");
    }
    else
    {
        a[++top]=x;
    }
}
int pop()
{
    if(top==-1)
    {
        return -1;
    }
    else
    {
        return a[top--];
    }
}
int peak()
{
    return a[top];
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("No elements in stack");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("\n %d",a[i]);
        }
    }
}
void main()
{
    int x,ch;
    while(1)
    {
        printf("\n 1.push \n 2.pop \n 3.peek \n 4.display \n 5.exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\n Enter element to insert:");
                   scanf("%d",&x);
                   push(x);
                   break;
            case 2:x=pop();
                   if(x==-1)
                   {
                       printf("stack under flow");
                   }
                   else
                   {
                       printf("Element deleted =%d",x);
                   }
                   break;
            case 3:x=peak();
                   printf("\n The element on top of stack =%d",x);
                   break;
            case 4:printf("\n The elements in stack are:");
                   display();
                   break;
            case 5:exit(0);
                   break;
            default:printf("\n Entered wrong choice");
        }
    }
}
