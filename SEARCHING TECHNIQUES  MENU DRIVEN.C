#include<stdio.h>
#include<stdlib.h>
void linearsearch(int [],int);
void binarysearch(int [],int);
int main()
{
int ch,m,n;
int a[10],b[10],i;
while(ch==0)
  {
    printf("\n1. linear search");
    printf("\n2. binary search");
    printf("\nEnter your choice :");
    scanf("\n%d",&ch);
    switch(ch)
    {
      case 1:printf("\n Enter Array size : ");
             scanf("%d",&m);
             for(i=0;i<m;i++)
             {
               printf("\n Enter array element : ");
               scanf("%d",&a[i]);
             }
             linearsearch(a,m);
             break;
      case 2: printf("\nEnter Array size : ");
              scanf("%d",&n);
              printf("\n Enter array element in sorted order : ");
              for(i=0;i<n;i++)
              {
                scanf("%d",&b[i]);
              }
              binarysearch(b,n);
              break;
      case 3:exit(0);
             break;
      default: printf("\n Enterd wrong choice ");
    }
  }
 }
void linearsearch(int a[],int m)
{
  int num,i,f=0;
  printf("\n Enter no to be search : ");
  scanf("%d",&num);
  for(i=0;i<m;i++)
  {
    if(a[i]==num)
    {
      printf("\n item is found at index %d !!!",i);
      f=1;
      break;
    }
  }
  if(f==0)
  printf("\n item is not found !!!");
}
void binarysearch(int b[],int n)
{
    int beg=0,num,mid,last;
    last=n-1;
    printf("\n Enter no to be search : ");
    scanf("%d",&num);
    mid=(beg+last)/2;
    while(num != b[mid] && beg <= last)
    {
     if(num > b[mid])
     {
      beg=mid+1;
     }
     else
     {
      last=mid-1;
      }
      mid=(beg+last)/2;
    }
    if(num==b[mid])
        printf("%d found at position %d\n",num,mid+1);
    if(beg>last)
        printf("%d not found in array\n",num);
}
