#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define MAX 50
struct polynomial
{
        int highpower;
        int coeff[MAX];
};
typedef struct polynomial poly;
poly*create()
{
        poly*p;
        int i;
        p=(poly*)malloc(sizeof(poly));
        printf("Enter the highpower of polynomial");
        scanf("%d",&p->highpower);
        for(i=p->highpower;i>=0;i--)
        {
                printf("Enter coeffient of %d exponent",i);
                scanf("%d",&p->coeff[i]);
        }
        return p;
}
int Max(int a,int b)
{
        return(a>b?a:b);
}
poly*add(poly*p1,poly*p2)
{
        poly*p3;
        int i;
        p3=(poly*)malloc(sizeof(poly));
        p3->highpower=Max(p1->highpower,p2->highpower);
        for(i=p3->highpower;i>=0;i--)
        {
                p3->coeff[i]=p1->coeff[i]+p2->coeff[i];
        }
        return p3;
}
poly*sub(poly*p1,poly*p2)
        int i;
        p3=(poly*)malloc(sizeof(poly));
        p3->highpower=Max(p1->highpower,p2->highpower);
        for(i=p3->highpower;i>=0;i--)
        {
                p3->coeff[i]=p1->coeff[i]-p2->coeff[i];
        }
        return p3;
}

poly*mul(poly*p1,poly*p2)
{
        poly*p3;
        int i;
        int j;
        p3=(poly*)malloc(sizeof(poly));
        p3->highpower=p1->highpower+p2->highpower;
        for(i=p1->highpower;i>0;i--)
        {
                for(j=p2->highpower;j>=0;j--)
                {
                        p3->coeff[i+j]=p3->coeff[i+j]+p1->coeff[i]*p2->coeff[j];
                }
        }
        return p3;
}
void display(poly*p)
{
        int i;
        for(i=p->highpower;i>=0;i--)
        {
                printf("%d*^%d+",p->coeff[i],i);
        }
}
int main()
{
        poly*p1,*p2,*p3;
        int ch;
        printf("create first polynomial");
        p1=create();
        printf("create second polynomial");
        p2=create();
        while(1)
        {
              printf("\n 1.add \n 2.sub \n3.mul \n 4.exit");
              printf("\n Enter your choice:");
              scanf("%d",&ch);
              switch(ch)
              {
                case 1:p3=add(p1,p2);
                       printf("\n The result of addition is");
                       display(p3);
                       break;
               case 2:p3=sub(p1,p2);
                      printf("\n The result of subtraction is");
                      display(p3);
                      break;
               case 3:p3=mul(p1,p2);
                      printf("\n The result of multplication is ");
                      display(p3);
                      break;
               case 4:exit(0);

               default:printf("\n check your choice");
              }
        }
}
