#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head,*tail;
void display()
{
    struct node *temp;
    temp=head;
    while(temp->next!=head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
void reverseLL()
{
    struct node *prevnode,*currentnode,*nextnode;
    prevnode=NULL;
    currentnode=head;
    while(currentnode!=NULL)
    {
        nextnode=currentnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head->next=tail;
    currentnode=tail;
    tail=head;
    head=currentnode;
}
int main()
{   head=NULL;
    int i,n;
    printf("enter the number of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        
        struct node* newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d",&newnode->data);
        //newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            newnode->next=NULL;
            tail=newnode;
        }
        tail->next=head;

    }
    display();
    printf("\n");
    reverseLL();
    display();
    
}