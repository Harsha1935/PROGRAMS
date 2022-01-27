#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int a[MAX],top=-1;
void push(int x)
{
    if(top==MAX-1)
    {
        printf("\n Stack overflow");
    }
    else
    {
        a[++top]=x;
    }
}
int pop(int x)
{
    if(top==-1)
    {
        return -1;
    }
    else
    {
      a[top--];
    }
    if(x==-1)
    {
        printf("\n stack underflow");
    }
    else
    {
        printf("\n Element deleted=%d",x);
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
        printf("\n no elements in the stack");
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
        printf("\n 1:push \n 2:pop \n 3:peak \n 4:display \n 5:exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\n Enter the element to push:");
                   scanf("%d",&x);
                   push(x);
                   break;
            case 2:pop(x);
                   break;
            case 3:x=peak();
                   printf("The element on the top of the stack =%d",x);
                   break;
            case 4:printf("\n The element in stack are:");
                   display();
                   break;
            case 5:exit(0);
                   break;
            default:printf("\n Entered wrong choice");
        }
    }
}
