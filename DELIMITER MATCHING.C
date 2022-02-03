#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 20
char a[MAX];
int top=-1;
void push(char c)
{
    a[++top]=c;
}
char pop()
{
    return a[top--];
}
void main()
{
    char exp[MAX],c,x;
    int flag=1,i=0;
    printf("\n Enter the expression for delimiter matching:");
    scanf("%s",exp);
    while(exp[i]!='\0')
    {
        c=exp[i];
        if(c=='('||c=='['||c=='{')
        {
            push(c);
        }
        else if(c==')'||c==']'|| c=='}')
        {
            if(top==-1)
            {
                flag=0;
                break;
            }
            else
            {
                x=pop();
                if(x=='(' && c==')'|| x=='[' && c==']'|| x=='{' && c=='}')
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        i++;
    }

if(top!=-1)
{
    flag=0;
}
if(flag==1)
{
    printf("\n Matched");
}
else
{
    printf("Not matched");
}
}
