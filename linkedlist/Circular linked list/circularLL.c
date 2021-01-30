#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
 struct node *head,*tail,*temp;
 int main()
 {
     head=NULL;
     int choice;
    do{ struct node *newnode;
     newnode = (struct node*)malloc(sizeof(struct node));
     printf("enter the data:");
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     if(head==NULL)
     {
        head=newnode;
        temp=newnode;
        tail=newnode;
     }
     else{
         temp->next=newnode;
         temp=newnode;
         tail=newnode;
     }
     newnode->next=head;
     
     printf("if you want to continue press 1 exit 0: ");
     scanf("%d",&choice);
    }while(choice);

    temp=head;
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!=head);
    printf("%d",tail->next->data);
 }