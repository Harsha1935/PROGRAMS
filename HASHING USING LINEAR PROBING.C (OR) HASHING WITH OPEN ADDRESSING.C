#include<stdio.h>
#include<stdlib.h>
void insert(int a[10],int x);
void search(int a[10],int x);
void delete(int a[10],int x);
void display(int a[10]);
int hash(int x);
void main()
{
 int a[10],x,flag=0,ch,i;
 for(i=0;i<10;i++)
 a[i]=-1;
 while(1)
 {
    printf("\n 1.insert \n 2.search \n 3.delete \n4.display \n 5.exit");
    printf("\n Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("Enter element to insert");
               scanf("%d",&x);
               insert(a,x);
               break;
        case 2:printf("Enter element to search");
               scanf("%d",&x);
               search(a,x);
               break;
        case 3:printf("Enter element to delete:");
               scanf("%d",&x);
               delete(a,x);
               break;
        case 4:printf("\n Element in hash table are ");
               display(a);
               break;
        case 5:exit(1);
        default:printf("check choice");
    }
 }
}
void insert(int a[10],int x)
{
    int i= hash(x);
    int flag=0,j;
    if(a[i]==-1)
    {
        a[i]=x;
        flag=1;
    }
    else
    {
        for(j=i+1;j<10;j++)
        {
            if(a[j]==-1)
            {
                a[j]=x;
                flag=1;
                break;
            }
        }
        for(j=0;j<i && flag==0;j++)
        {
            if(a[j]==-1)
            {
                a[j]=x;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("No slot to place element %d",x);
        }
    }
}
int hash(int x)
{
    return x%10;
}
void search(int a[10],int x)
{
    int i =hash(x);
    int flag=0,j;
    if(a[i]==x)
    {
        flag=1;
    }
    else
    {
        for(j=i+1;j<10;j++)
        {
            if(a[j]==x)
            {
                flag=1;
                break;
            }
        }
        for(j=0;j<i && flag==0;j++)
        {
            if(a[j]==x)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("Element %d is found",x);
    }
    else
    {
        printf("Element %d is not found",x);
    }
}
void delete(int a[10],int x)
{
    int i=hash(x);
    int flag=0,j;
    if(a[i]==x)
    {
        a[i]=-1;
        flag=1;
    }
    else
    {
        for(j=i+1;j<10;j++)
        {
            if(a[j]==x)
            {
                a[j]=-1;
                flag=1;
                break;
            }
        }
        for(j=0;j<i && flag==0;j++)
        {
            if(a[i]==x)
            {
                a[j]=-1;
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("Element %d is deleted",x);
    }
    else
    {
        printf("Element %d is not found",x);
    }
}
void display(int a[10])
{
    int i=0;
    int n=10;
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
