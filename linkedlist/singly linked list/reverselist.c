#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;

};
struct node *head,*temp;
void display()
{
    temp=head;
    while(temp!=NULL)
    {   
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
void reverseLL()
{   printf("reversed list");
    struct node *current,*prev,*nextnode;
    prev=NULL;
    current=nextnode=head;
    while(nextnode!=NULL)
    {
        nextnode=current->next;
        current->next=prev;
        prev=current;
        current=nextnode;
    }
    head=prev;
    display();
}
int main()
{
    head=NULL;
    int choice;
    
    struct node *newnode;
    do{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
       head=newnode;
       temp=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->next=NULL;
        temp=newnode;
    }
    printf("do you want to continue press 1 to exit 0:");
    scanf("%d",&choice);
    
    }while(choice);
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    reverseLL();
}