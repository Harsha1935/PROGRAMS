#include<stdio.h>
#include<stdlib.h>
struct node
{
    int ele;
    struct node*next;
};
void main()
{
    struct node*A,*B,*C;
    A=(struct node*)malloc(sizeof(struct node));
    B=(struct node*)malloc(sizeof(struct node));
    C=(struct node*)malloc(sizeof(struct node));
    A->ele=10;
    A->next=B;
    B->ele=20;
    B->next=C;
    C->ele=30;
    C->next=NULL;
    printf("value at A=%d\n",A->ele);
    printf("value at B=%d\n",B->ele);
    printf("value at B=%d\n",A->next->ele);
    printf("value at C=%d\n",C->ele);
    printf("value at C=%d\n",B->next->ele);
    printf("value at C=%d\n",A->next->next->ele);
    printf("Address of A=%d\n",A);
    printf("Address of B=%d\n",B);
    printf("Address of B=%d\n",A->next);
    printf("Address of C=%d\n",C);
    printf("Address of C=%d\n",B->next);
    printf("Address of C=%d\n",A->next->next);
}
