#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*tail;
struct node *temp;
void insertMiddle(int n)
{      
    
      int j=1,pos=0;
    if(n%2==0)
    {
       pos=n/2;
    }
    else
    {
        pos=(n/2)+1;
        
    }
    
    temp=head;
    while(j<pos)
    {
        temp=temp->next;
        j++;
    }
    struct node *insertnode;
    insertnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:\n");
    scanf("%d",&insertnode->data);
    insertnode->next=temp->next;
    temp->next=insertnode;
}
int main()
{
    int i,x;
    head=NULL;
    printf("enter number of nodes:");
    scanf("%d",&x);
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
  insertMiddle(x);
    temp=head;
    while(temp!=NULL)
    {
       printf("%d ",temp->data);
       temp=temp->next;
    }

   
}