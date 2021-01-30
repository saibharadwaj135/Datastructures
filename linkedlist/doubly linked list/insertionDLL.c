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
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void inbeginning()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    
    printf("enter the data: ");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else{
    newnode->next=head;
    head->prev=newnode;
    head=newnode;}
    display();
}
void inend()
{
     struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
     printf("enter the data: ");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
     tail->next=newnode;
     newnode->prev=tail;
     tail=newnode;
     display();
}
void afterposition()
{
     int pos,i=1;
     printf("enter the position ");
     scanf("%d",&pos);
     temp=head;
     while(i<pos)  //at particular position while(i<pos-1)
     {
         temp=temp->next;
         i++;
     }
       struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
     printf("enter the data: ");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
    
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->next->prev=newnode;

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
   printf("beginning\n");
    inbeginning();
    printf("\n");
     printf("end\n");
    inend();
    printf("position\n");
    afterposition();
}