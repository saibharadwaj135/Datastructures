#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* prev;
    struct node* next;
};
struct node *head,*tail;
void display()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void reverseLL()
{
    struct node *currentnode,*nextnode;
    currentnode=head;
    while(currentnode!=NULL)
    {
        nextnode=currentnode->next;
        currentnode->next=currentnode->prev;
        currentnode->prev=nextnode;
        currentnode=nextnode;
    }
    currentnode=tail;
    tail=head;
    head=currentnode;
}
int main()
{  head=NULL;
    int i,n;
    printf("enter the number of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL;
        if(head==NULL)
        {
           head=newnode;
           tail=newnode;

        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }

    }
    display();
    printf("\n");
    reverseLL();
    display();
   
}