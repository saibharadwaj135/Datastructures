#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head,*temp,*tail;
int main()
{
    head=NULL;
    int choice;
    do{
         struct node *newnode;
         newnode=(struct node*)malloc(sizeof(struct node));
         printf("enter the data");
         scanf("%d",&newnode->data);
         newnode->prev=NULL;
         newnode->next=NULL;
         if(head==NULL)
         {
             head=newnode;
             temp=tail=newnode;
         }
         else{
              temp->next=newnode;
              newnode->prev=temp;
              temp=newnode;
              tail=newnode;
         }
         printf("to continue press 1 exit 0:");
         scanf("%d",&choice);
    }while(choice);
    temp=head;
    while(temp!=NULL)
    { 
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    struct node *current,*nextnode;
    current=nextnode=head;
    while(nextnode!=NULL)
    {   nextnode=current->next;
        current->next=current->prev;
        current->prev=nextnode;
        current=nextnode;
    }
    current=head;
    head=tail;
    tail=current;
    
    temp=head;
    while(temp!=NULL)
    {   
        printf("%d ",temp->data);
        temp=temp->next;
    }

}