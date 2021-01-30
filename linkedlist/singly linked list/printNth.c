#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*tail;
struct node *temp;
void printNth()
{
    int j=1,pos;
    printf("enter the position:");
    scanf("%d",&pos);
    
    temp=head;
    while(j<pos)
    {
        temp=temp->next;
        j++;
    }
    printf("%d",temp->data);
}
int main()
{
    int i,x;
    printf("enter number of nodes:");
    scanf("%d",&x);
    head=NULL;
    for(i=0;i<x;i++)
    {   
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data:");
        scanf("%d",&newnode->data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            newnode->next=NULL;
        }
        else
        {
            tail->next=newnode;
            newnode->next=NULL;
            tail=newnode;   
        }
    }
    printNth();

    return 0;
}   