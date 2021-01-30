#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;

};
struct node *head;
int main()
{
    head=NULL;
    int choice;
    struct node *temp;
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




}