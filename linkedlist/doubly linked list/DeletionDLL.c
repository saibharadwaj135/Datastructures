#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head,*temp,*tail;
void display()
{
    temp=head;
    while (temp!=NULL)
    {   
        printf("%d ",temp->data);
        temp=temp->next;
    } 
}
void delbeg()
{
    temp=head;
    head=temp->next;
    temp->next->prev=NULL;
    free(temp);
    display();
}
void delend()
{
    temp=tail;
    temp->prev->next=NULL;
    tail=temp->prev;
    free(temp);
    display();
}
void delposi()
{
    int i=1,pos;
    scanf("%d",&pos);
    temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
   temp->prev->next=temp->next;
   temp->next->prev=temp->prev;
   free(temp);
   display();
}
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
    delbeg();
     printf("\n");
    delend();
    printf("\n");
    delposi();
    
}