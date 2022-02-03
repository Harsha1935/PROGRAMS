#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#define MAX 20
int a[MAX],top=-1;
void push(int x)
{
    a[++top]=x;
}
int pop()
{
    return a[top--];
}
int  operation(int op1,int op2,char c)
{
    switch(c)
    {
        case '^':return(pow(op1,op2));
                break;
        case '*':return(op1*op2);
                 break;
        case '/':return(op1/op2);
                 break;
        case '%':return(op1%op2);
                 break;
        case '+':return(op1+op2);
                 break;
        case '-':return(op1-op2);
                 break;
    }
}
void main()
{
    char postfix[MAX],c;
    int op1,op2,result,i=0;
    printf("\n Enter the postfix expression: ");
    scanf("%s",postfix);
    while(postfix[i]!='\0')
    {
        c=postfix[i];
        if(isdigit(c))
        {
            push(c-'0');
        }
        else
        {
            op2=pop();
            op1=pop();
            result=operation(op1,op2,c);
            push(result);
        }
        i++;
    }
    printf("The result of postfix expression =%d",a[top]);
}
